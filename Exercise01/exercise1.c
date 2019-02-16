/* Hello World program */
#include <stdio.h>
#include "random.h"

#define NUM_VALUES 250

int value[NUM_VALUES] = {0};

int main()
{
	unsigned int sum = 0; // only stores positive numbers

	unsigned char i = 0; // holds values fromn 0-255
	init_random();
	for ( i = 0; i<NUM_VALUES; i = i + 1) {
		value[i] = random_ushort();
		//printf("i = %d  value = %d\n", i , value[i]);
		sum = sum + value[i];
	}
	int average = sum / NUM_VALUES;
	unsigned int min = 0;
	int max = 0;
	// Loop over array to normalise and find min and max
	for (i = 0; i < NUM_VALUES; i = i + 1) {
		(value[i] - average > max) ? max = value[i] - average : "";
		(value[i] - average < min) ? min = value[i] - average : printf("yo les noobs \n");
	
		if (min > value[i] - average) {
			printf("the value is %u", value[i] - average);
		}
	}
	printf("sum %u \n", sum);
	printf("avg %u \n", average);
	printf("min %u \n", min); // min is fooooked
	printf("max %u \n",max);
	getchar();
	return 0;
}