#include<stdio.h>
#include<math.h>
/*from video 5: Using mathematical functions ceil(log10())under math.h header file*/
int main()
{
	double num,result;
	printf("\tEnter the number: ");
	scanf("%lf",&num );
    result = ceil(log10(num)); //ceil here will count the no.of digits in a number 
	printf("\n\t Total digits in number :%lf",result );
	
	return 0;
}