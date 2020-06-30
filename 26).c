#include<stdio.h>
#include<math.h>
/*from video 5: Using mathematical functions under math.h header file*/
int main()
{
	double num,result;
	printf("\tEnter the number: ");
	scanf("%lf",&num );
    result = ceil(num);
	printf("\n\tThe result is:%lf",result );
	result = floor(num);
	printf("\n\tThe result is:%lf",result );
	return 0;
}