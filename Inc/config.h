#if !defined(__CONFIG_H__)
#define __CONFIG_H__
#define WD_ENA 1

#define PIN_DISPLAY 0
#define ENCODER_TEST 0
#define USEC_MIN (60L * 1000000L)

#define DBGPORT USART2

#define ADC1_0 LL_ADC_CHANNEL_0
#define ADC1_1 LL_ADC_CHANNEL_6
#define ADC2_0 LL_ADC_CHANNEL_1
#define ADC2_1 LL_ADC_CHANNEL_7

#if 1

#define MAX_CHAN_POWER 1
#define MAX_CHAN_RMS 2
#define MAX_CHAN (MAX_CHAN_POWER + MAX_CHAN_RMS)

#else

#define MAX_CHAN_POWER 0
#define MAX_CHAN_RMS 1
#define MAX_CHAN (MAX_CHAN_POWER + MAX_CHAN_RMS)

#endif	/* 0 */

#define remoteISR(x) USART3_IRQHandler(x)
#define REMOTE_IRQn USART3_IRQn

#define encoderISR(x) EXTI15_10_IRQHandler(x)

#include "timers.h"
#include "pinDef.h"
#endif	/* __CONFIG_H__ */
