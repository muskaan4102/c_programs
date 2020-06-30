#include<stdio.h>
int main()
{
	int amt,ten,fif,hun;
	printf("\tEnter amount to be withdrawn:  ");
	scanf("%d",&amt );
	ten = amt/10;
	fif = amt/50;
	hun = amt/100;
	printf("\nThe cashier will give %d Rs 10 notes\n %d Rs 50 notes\n %d Rs 100 notes",ten,fif,hun );
	return 0;

}

