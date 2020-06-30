#include<stdio.h>
/*Set 2 :Converted temperature in fahrenheit to centigrade*/
int main()
{
	float fah,cal;
	printf("\tEnter temperature in fahrenheit: ");
	scanf("%f",&fah );
	cal = 5*(fah - 32)/9;
	printf("\tTemperature in centigrade degree:%f ",cal );
	return 0;
}	
	