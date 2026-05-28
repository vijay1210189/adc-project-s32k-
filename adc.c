#include <stdio.h>
#include "adc.h"

/* Simulated SC1 register */
int SC1;

/* Step 2: Initialize ADC */
void ADC_Init()
{
    printf("ADC Initialized\n");
}

/* Step 3: Start ADC Conversion */
void ADC_Start(int channel)
{
    SC1 = channel;   // Select channel (like ADCH)

    printf("ADC Started on Channel: %d\n", channel);
}
