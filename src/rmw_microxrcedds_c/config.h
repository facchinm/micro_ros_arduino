#ifndef RMW_MICROXRCEDDS_CONFIG_H
#define RMW_MICROXRCEDDS_CONFIG_H

#include <uxr/client/config.h>

/* #undef MICRO_XRCEDDS_UDP */
/* #undef MICRO_XRCEDDS_SERIAL */
#define MICRO_XRCEDDS_CUSTOM_SERIAL
/* #undef MICRO_XRCEDDS_IPV4 */
/* #undef MICRO_XRCEDDS_IPV6 */
/* #undef MICRO_XRCEDDS_USE_REFS */
#define MICRO_XRCEDDS_USE_XML

#ifdef MICRO_XRCEDDS_UDP
    #define RMW_UXRCE_MAX_TRANSPORT_MTU UXR_CONFIG_UDP_TRANSPORT_MTU
    #define RMW_UXRCE_DEFAULT_UDP_IP ""
    #define RMW_UXRCE_DEFAULT_UDP_PORT ""
#elif defined(MICRO_XRCEDDS_SERIAL) || defined(MICRO_XRCEDDS_CUSTOM_SERIAL)
    #define RMW_UXRCE_MAX_TRANSPORT_MTU UXR_CONFIG_SERIAL_TRANSPORT_MTU
    #define RMW_UXRCE_DEFAULT_SERIAL_DEVICE ""
#endif

#define RMW_UXRCE_MAX_HISTORY 1
#define RMW_UXRCE_STREAM_HISTORY 5
#define RMW_UXRCE_MAX_BUFFER_SIZE (RMW_UXRCE_MAX_TRANSPORT_MTU * RMW_UXRCE_STREAM_HISTORY)

#define RMW_UXRCE_MAX_SESSIONS 1
#define RMW_UXRCE_MAX_NODES 1
#define RMW_UXRCE_MAX_PUBLISHERS 21 + 1
#define RMW_UXRCE_MAX_SUBSCRIPTIONS 3
#define RMW_UXRCE_MAX_SERVICES 12
#define RMW_UXRCE_MAX_CLIENTS 3
#define RMW_UXRCE_MAX_TOPICS -1

#if RMW_UXRCE_MAX_TOPICS == -1
#define RMW_UXRCE_MAX_TOPICS_INTERNAL RMW_UXRCE_MAX_PUBLISHERS + RMW_UXRCE_MAX_SUBSCRIPTIONS
#else
#define RMW_UXRCE_MAX_TOPICS_INTERNAL RMW_UXRCE_MAX_TOPICS
#endif

#define RMW_UXRCE_NODE_NAME_MAX_LENGTH 128
#define RMW_UXRCE_TOPIC_NAME_MAX_LENGTH 100
#define RMW_UXRCE_TYPE_NAME_MAX_LENGTH 128
#define RMW_UXRCE_XML_BUFFER_LENGTH 600
#define RMW_UXRCE_REF_BUFFER_LENGTH 100

#endif // RMW_MICROXRCEDDS_CONFIG_H
