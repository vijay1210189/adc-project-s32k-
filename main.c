#include <stdio.h>
#include "sensor.h"
#include "adc.h"

int main()
{
    float Vin;
    int adcValue;

    /* Step 1: Read sensor */
    Vin = Sensor_Read();

    /* Step 2: Initialize ADC */
    ADC_Init();

    /* Step 3: Start ADC conversion */
    ADC_Start(0);

    /* Step 4: Wait until conversion is done */
    while (!ADC_IsDone());

    /* Step 5: Read ADC result */
    adcValue = ADC_Read();

    /* Display output */
    printf("Input Voltage (Vin): %.2f V\n", Vin);
    printf("Digital Value (ADC): %d\n", adcValue);

    return 0;
}
