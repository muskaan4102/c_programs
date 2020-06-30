#include<stdio.h>
/*Set 2: Calculating the sum of the digits of a five-digit number*/
int main()
{
	int num,temp,rem,sum;
	printf("\tEnter any five-digit number : ");
	scanf("%d",&num );
	
	temp = num;
	
	rem = temp % 10;      //85349 % 10 = 9
	sum = rem;            // sum = 9
	temp = temp / 10;      // 85349 / 10 = 8534
	
	rem = temp % 10;      //8534 % 10 = 4
	sum += rem;            // sum = 9 + 4 = 13
	temp = temp / 10;      // 8534 / 10 = 853
	
	rem = temp % 10;      //853 % 10 = 3
	sum += rem;            // sum = 13 + 3 = 16
	temp = temp / 10;      // 853 / 10 = 85
	
	rem = temp % 10;      //85 % 10 = 5
	sum += rem;            // sum = 16 + 5 = 21
	temp = temp / 10;      // 85 / 10 = 8
	
	rem = temp % 10;      //8 % 10 = 8
	sum += rem;            // sum = 21 + 8  = 29
	temp = temp / 10;      // 8/ 10 = 0
	
	printf("\tThe sum of the given number is : %d",sum );
	return 0;
	
}	
	
	
