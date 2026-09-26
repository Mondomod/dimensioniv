/** Mondomatic */

#ifndef _HEAVY_DIMENSIONIV_H_
#define _HEAVY_DIMENSIONIV_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_DIMENSIONIV_PARAM_IN_ANTIPHASE = 0x899A1AC4, // antiphase
  HV_DIMENSIONIV_PARAM_IN_DIMENSION = 0x4612B591, // dimension
} Hv_DimensionIV_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_DimensionIV_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_DimensionIV_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_DimensionIV_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_DIMENSIONIV_H_
