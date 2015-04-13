/*
 * Pasa de grados celcius a Fahrenheit
 *  13/04/2015
 *  Author: Pato Daian 141940-7
 */
#include<stdio.h>
int main()
{
float faht,cels;
int maximo;
maximo = 350;
cels = 0;
while (cels <= maximo)
{
	faht = (5.0/9.0 * cels) + 32 ;
	printf("%3.0f     %3.2f\n",cels,faht);
	cels = cels + 50;
}
return 0;

	}



