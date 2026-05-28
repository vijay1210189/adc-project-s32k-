#ifndef ADC_H
#define ADC_H

void ADC_Init();

void ADC_Start(int channel);

int ADC_IsDone();

/* Step 5: Read result */
int ADC_Read();

#endif
``
