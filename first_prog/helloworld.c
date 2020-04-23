#include <stdio.h>

void main(){

	double cel = 0;
	double fah = 0;
	unsigned int i = 0;
	for(i; i < 20; i++){
		cel = (5 / 9) * (fah - 32);
		fah++;
	}
	printf("Celcius | Fahrenheit");
}
