/*
     This file is part of GNUnet.
     (C) 2001, 2002, 2003, 2004, 2009 Christian Grothoff (and other contributing authors)

     GNUnet is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published
     by the Free Software Foundation; either version 2, or (at your
     option) any later version.

     GNUnet is distributed in the hope that it will be useful, but
     WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with GNUnet; see the file COPYING.  If not, write to the
     Free Software Foundation, Inc., 59 Temple Place - Suite 330,
     Boston, MA 02111-1307, USA.
*/

/**
 * @author Christian Grothoff
 * @author NOT Nathan Evans
 * @file dv/dv.h
 */
#ifndef DV_H
#define DV_H

#include "gnunet_common.h"

#define DEBUG_DV GNUNET_YES
#define DEBUG_DV_API GNUNET_YES

typedef void (*GNUNET_DV_MessageReceivedHandler) (void *cls,
                                                  struct GNUNET_PeerIdentity *sender,
                                                  struct GNUNET_MessageHeader *msg,
                                                  unsigned int distance,
                                                  char *sender_address,
                                                  size_t sender_address_len);

/**
 * DV Message, contains a message that was received
 * via DV for this peer!
 *
 * Sender address is copied to the end of this struct.
 */
struct GNUNET_DV_MessageReceived
{
  /**
   * Type:  GNUNET_MESSAGE_TYPE_TRANSPORT_DV_MESSAGE
   */
  struct GNUNET_MessageHeader header;

  /**
   * The sender of the message
   */
  struct GNUNET_PeerIdentity *sender;

  /**
   * The message that was sent
   */
  struct GNUNET_MessageHeader *msg;

  /**
   * The distance to the peer that we received the message from
   */
  size_t distance;

  /**
   * Length of the sender address, appended to end of this message
   */
  size_t sender_address_len;

};


/**
 * DV Message, indicates that we have learned of a new DV level peer.
 *
 * Sender address is copied to the end of this struct.
 */
struct GNUNET_DV_ConnectMessage
{
  /**
   * Type:  GNUNET_MESSAGE_TYPE_TRANSPORT_DV_MESSAGE
   */
  struct GNUNET_MessageHeader header;

  /**
   * The sender of the message
   */
  struct GNUNET_PeerIdentity *sender;

  /**
   * The message that was sent
   */
  struct GNUNET_MessageHeader *msg;

  /**
   * The distance to the peer that we received the message from
   */
  size_t distance;

  /**
   * Length of the sender address, appended to end of this message
   */
  size_t sender_address_len;

};


/**
 * Message to send a message over DV via a specific peer
 */
struct GNUNET_DV_SendMessage
{
  /**
   * Type: GNUNET_MESSAGE_TYPE_DV_SEND
   */
  struct GNUNET_MessageHeader header;

  /**
   * Intended final recipient of this message
   */
  struct GNUNET_PeerIdentity target;

  /**
   * The message(s) to be sent.
   */
  char *msgbuf;

  /**
   * The size of the msgbuf
   */
  size_t msgbuf_size;

  /**
   * Message priority
   */
  size_t priority;

  /**
   * How long can we delay sending?
   */
  struct GNUNET_TIME_Relative timeout;

  /**
   * Size of the address (appended to end of struct)
   */
  size_t addrlen;

  /*
   * Sender, appended to end of struct tells via whom
   * to send this message.
   */

};

struct GNUNET_DV_Handle *
GNUNET_DV_connect (struct GNUNET_SCHEDULER_Handle *sched,
                  const struct GNUNET_CONFIGURATION_Handle *cfg,
                  GNUNET_DV_MessageReceivedHandler receive_handler,
                  void *receive_handler_cls);

#endif
