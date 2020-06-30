#include<stdio.h>
#include<math.h>
/*from video 5: Using mathematical functions log10()under math.h header file*/
int main()
{
	double num,result;
	printf("\tEnter the number: ");
	scanf("%lf",&num );
    result = log10(num);
	printf("\n\tlog10 :%lf",result );
	
	return 0;
}