# This Makefile.am is in the public domain
SUBDIRS = .

gnunetincludedir = $(includedir)/gnunet

if MINGW
  WINPROC = winproc.h
endif

EXTRA_DIST = \
  gauger.h \
  block_fs.h \
  block_dns.h \
  block_regex.h

if TALER_ONLY
gnunetinclude_HEADERS = \
  platform.h plibc.h $(WINPROC) gettext.h \
  gnunet_common.h \
  gnunet_container_lib.h \
  gnunet_crypto_lib.h \
  gnunet_strings_lib.h \
  gnunet_time_lib.h \
  gnunet_util_taler_wallet_lib.h
else

gnunetinclude_HEADERS = \
  platform.h plibc.h $(WINPROC) gettext.h \
  gnunet_applications.h \
  gnunet_arm_service.h \
  gnunet_ats_service.h \
  gnunet_ats_plugin.h \
  gnunet_bandwidth_lib.h \
  gnunet_bio_lib.h \
  gnunet_block_lib.h \
  gnunet_block_plugin.h \
  gnunet_client_lib.h \
  gnunet_common.h \
  gnunet_constants.h \
  gnunet_configuration_lib.h \
  gnunet_consensus_service.h \
  gnunet_container_lib.h \
  gnunet_conversation_service.h \
  gnunet_core_service.h \
  gnunet_crypto_lib.h \
  gnunet_curl_lib.h \
  gnunet_datacache_lib.h \
  gnunet_datacache_plugin.h \
  gnunet_datastore_service.h \
  gnunet_datastore_plugin.h \
  gnunet_db_lib.h \
  gnunet_dht_service.h \
  gnunet_disk_lib.h \
  gnunet_dnsparser_lib.h \
  gnunet_dnsstub_lib.h \
  gnunet_dns_service.h \
  gnunet_dv_service.h \
  gnunet_fragmentation_lib.h \
  gnunet_friends_lib.h \
  gnunet_fs_service.h \
  gnunet_getopt_lib.h \
  gnunet_gns_service.h \
  gnunet_gnsrecord_lib.h \
  gnunet_gnsrecord_plugin.h \
  gnunet_hello_lib.h \
  gnunet_helper_lib.h \
  gnunet_identity_service.h \
  gnunet_json_lib.h \
  gnunet_load_lib.h \
  gnunet_cadet_service.h \
  gnunet_microphone_lib.h \
  gnunet_multicast_service.h \
  gnunet_mst_lib.h \
  gnunet_mq_lib.h \
  gnunet_my_lib.h \
  gnunet_mysql_lib.h \
  gnunet_namecache_plugin.h \
  gnunet_namecache_service.h \
  gnunet_namestore_plugin.h \
  gnunet_namestore_service.h \
  gnunet_nat_auto_service.h \
  gnunet_nat_service.h \
  gnunet_nc_lib.h \
  gnunet_network_lib.h \
  gnunet_nse_service.h \
  gnunet_op_lib.h \
  gnunet_os_lib.h \
  gnunet_peer_lib.h \
  gnunet_peerinfo_service.h \
  gnunet_peerstore_plugin.h \
  gnunet_peerstore_service.h \
  gnunet_plugin_lib.h \
  gnunet_pq_lib.h \
  gnunet_psycstore_plugin.h \
  gnunet_psycstore_service.h \
  gnunet_psyc_service.h \
  gnunet_psyc_util_lib.h \
  gnunet_psyc_env.h \
  gnunet_psyc_message.h \
  gnunet_psyc_slicer.h \
  gnunet_program_lib.h \
  gnunet_protocols.h \
  gnunet_resolver_service.h \
  gnunet_regex_service.h \
  gnunet_revocation_service.h \
  gnunet_scalarproduct_service.h \
  gnunet_scheduler_lib.h \
  gnunet_secretsharing_service.h \
  gnunet_service_lib.h \
  gnunet_set_service.h \
  gnunet_signal_lib.h \
  gnunet_signatures.h \
  gnunet_social_service.h \
  gnunet_speaker_lib.h \
  gnunet_sq_lib.h \
  gnunet_statistics_service.h \
  gnunet_strings_lib.h \
  gnunet_testbed_service.h \
  gnunet_testbed_logger_service.h \
  gnunet_testing_lib.h \
  gnunet_time_lib.h \
  gnunet_transport_service.h \
  gnunet_transport_communication_service.h \
  gnunet_transport_core_service.h \
  gnunet_transport_hello_service.h \
  gnunet_transport_manipulation_service.h \
  gnunet_transport_monitor_service.h \
  gnunet_transport_plugin.h \
  gnunet_tun_lib.h \
  gnunet_util_lib.h \
  gnunet_vpn_service.h

endif
