#include<stdio.h>
#include<math.h>
/*from video 5: Using mathematical functions fmod()under math.h header file*/
int main()
{
	double n1,n2,result;
	printf("\tEnter n1: ");
	scanf("%lf",&n1 );
    printf("\tEnter n2: ");
	scanf("%lf",&n2 );
    result = fmod( n1 , n2 ); // n1 % n2 = result
	printf("\n\tThe result is :%lf",result );
	
	return 0;
}