#ifndef __VBOARD__
#define __VBOARD__

extern uint8_t __ramvectors__[];

#define VBOARD_SLEEP_MICRO_COMPENSATION	30


#if !defined(CORTEX_FLASH_VTABLE)
#   define CORTEX_FLASH_VTABLE 0x8000000
#endif

#define CORTEX_VTOR_INIT ((uint32_t)(&__ramvectors__))
#define CORTEX_VECTOR_COUNT	91

#define CORTEX_ENABLE_WFI_IDLE          TRUE
#define CORTEX_SIMPLIFIED_PRIORITY		FALSE
#define CORTEX_USE_FPU					FALSE

#define PORT_PRIO_BITS 4
#define PORT_PRIO_MASK(n) ((n) << (8 - PORT_PRIO_BITS))


#endif