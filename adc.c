#include <stdio.h>
#include "adc.h"

/* Simulated registers */
int SC1;
int COCO;
int Rn;   // result register

/* Step 2 */
void ADC_Init()
{
    printf("ADC Initialized\n");
}

/* Step 3 + Step 4 + Step 5 */
void ADC_Start(int channel)
{
    SC1 = channel;   // select channel
    COCO = 0;

    printf("ADC Started on Channel: %d\n", channel);

    /* --------- SIMULATION --------- */

    float Vin = 2.5;        // value from sensor
    float Vref = 5.0;
    int resolution = 4095;

    // simulate conversion delay
    for(int i = 0; i < 1000000; i++);

    /* Convert Vin → digital (Rn) */
    Rn = (Vin / Vref) * resolution;

    /* conversion complete */
    COCO = 1;
}

/* Step 4 */
int ADC_IsDone()
{
    return COCO;
}

/* Step 5 */
int ADC_Read()
{
    return Rn;
}
