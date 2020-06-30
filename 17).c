#include<stdio.h>
/*Finding the sum of the first and the last digit of a four digit number*/
int main()
{
	int num,sum,d1,d4;
	printf("\tEnter any four digit number: ");
	scanf("%d",&num );
	d1 = num / 1000;
	d4 = num % 10;
	sum = d1 + d4;
	printf("\tThe sum of the first and last digit is %d",sum );
	return 0;
}