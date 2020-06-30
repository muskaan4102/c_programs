#include<stdio.h>
/*Set 2: Converting time in minutes in hrs and seconds*/
int main()
{
	int hrs,min,tim_in_min;
	printf("\t Enter time in minutes: \n");
	scanf("%d",&tim_in_min );
	hrs  = (tim_ in_min/60);
	min = (tim_in_min%60);
	printf("\t Total number of hours and minutes in - %d minutes = %d hours %d minutes", tim_in_min,hrs,min );
	return 0;
}	