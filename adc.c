#include <stdio.h>
#include "adc.h"

/* Simulated registers */
int SC1;
int COCO;  // conversion complete flag

/* Step 2 */
void ADC_Init()
{
    printf("ADC Initialized\n");
}

/* Step 3 + Step 4 combined */
void ADC_Start(int channel)
{
    SC1 = channel;   // select channel
    COCO = 0;        // not done

    printf("ADC Started on Channel: %d\n", channel);

    /* --------- SIMULATION OF CONVERSION --------- */

    // In real hardware → SAR conversion happens here
    // We just wait (simulate delay)
    for(int i = 0; i < 1000000; i++);

    /* Conversion done */
    COCO = 1;
}

/* Step 4 */
int ADC_IsDone()
{
    return COCO;
}
