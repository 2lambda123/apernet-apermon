#ifndef APERMON_H
#define APERMON_H
#include <stdint.h>

typedef struct _apermon_prefix_list {
    uint32_t af; /* enum sflow_af */
    union {
        uint32_t inet;
        uint8_t inet6[16];
    };
    
    union {
        uint32_t mask;
        uint8_t mask6[16];
    };

    const struct _apermon_prefix_list *next;
} apermon_prefix_list;

#endif // APERMON_H