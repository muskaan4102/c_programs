#include<stdio.h>
/*Set 2: Converting hours and minutes in time in minutes*/
int main()
{
	int hrs,min,tim_in_min;
	printf("\t Enter Hours:  \n");
	scanf("%d",&hrs);
	printf("\t Enter minutes:  \n");
	scanf("%d",&min);
	tim_in_min = ( min*60) +( hrs*60*60);
	printf("\t Time in Minutes [in seconds]- %d:%d = %d\n",hrs,min,tim_in_min );
	return 0;
}