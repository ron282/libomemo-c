if(BUILD_SHARED_LIBS AND NOT MSVC)
	find_library(M_LIB m)
endif()

include_directories(
	.
	curve25519/ed25519/nacl_includes
	curve25519/ed25519/additions
	curve25519/ed25519/sha512
	curve25519/ed25519
	curve25519
)

set(protobuf_SRCS
	LocalStorageProtocol.pb-c.c
	WhisperTextProtocol.pb-c.c
	FingerprintProtocol.pb-c.c
	OMEMO.pb-c.c
)

set(omemo_SRCS
	vpool.c
	vpool.h
	signal_protocol.c
	signal_protocol.h
	signal_protocol_types.h
	signal_protocol_internal.h
	curve.c
	curve.h
	hkdf.c
	hkdf.h
	ratchet.c
	ratchet.h
	protocol.c
	protocol.h
	session_state.c
	session_state.h
	session_record.c
	session_record.h
	session_pre_key.c
	session_pre_key.h
	session_builder.c
	session_builder.h
	session_builder_internal.h
	session_cipher.c
	session_cipher.h
	key_helper.c
	key_helper.h
	sender_key.c
	sender_key.h
	sender_key_state.c
	sender_key_state.h
	sender_key_record.c
	sender_key_record.h
	group_session_builder.c
	group_session_builder.h
	group_cipher.c
	group_cipher.h
	fingerprint.c
	fingerprint.h
	device_consistency.c
	device_consistency.h
)

add_subdirectory(curve25519)
add_subdirectory(protobuf-c)

add_library(omemo-c
	${protobuf_SRCS}
	${omemo_SRCS}
	$<TARGET_OBJECTS:curve25519>
	$<TARGET_OBJECTS:protobuf-c>
)

if(BUILD_SHARED_LIBS)
	if(NOT MSVC)
		target_link_libraries(omemo-c ${M_LIB})
	endif()
	set_target_properties(omemo-c PROPERTIES
		VERSION ${OMEMO_C_VERSION}
		SOVERSION ${OMEMO_C_VERSION_MAJOR}
	)
endif()

INSTALL(
	FILES
	signal_protocol.h
	signal_protocol_types.h
	curve.h
	hkdf.h
	ratchet.h
	protocol.h
	session_state.h
	session_record.h
	session_pre_key.h
	session_builder.h
	session_cipher.h
	key_helper.h
	sender_key.h
	sender_key_state.h
	sender_key_record.h
	group_session_builder.h
	group_cipher.h
	fingerprint.h
	device_consistency.h
	DESTINATION ${INCLUDE_INSTALL_DIR}/omemo
)

INSTALL(TARGETS omemo-c
	LIBRARY DESTINATION ${LIB_INSTALL_DIR}
	RUNTIME DESTINATION ${BIN_INSTALL_DIR}
	ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
)

configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/libomemo-c.pc.in
		${CMAKE_CURRENT_BINARY_DIR}/libomemo-c.pc @ONLY)

INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/libomemo-c.pc DESTINATION "${INSTALL_PKGCONFIG_DIR}")
