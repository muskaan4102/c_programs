#include<stdio.h>
#include<math.h>
/*from video 5: Using mathematical functions sqrt(),pow() under math.h header file*/
int main()
{
	double num,result;
	printf("\tEnter the number: ");
	scanf("%lf",&num );
    result = sqrt(num);
	printf("\n\tThe square root of the number is:%lf",result );
	result = pow(num,3);//cube root of the number
	printf("\n\tThe cube root of the number is:%lf",result );
	return 0;
}