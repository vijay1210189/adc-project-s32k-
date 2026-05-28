#ifndef ADC_H
#define ADC_H

void ADC_Init();

void ADC_Start(int channel);

/* Step 4: Check conversion complete */
int ADC_IsDone();

#endif
