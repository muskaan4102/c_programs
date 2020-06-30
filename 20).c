#include<stdio.h>
int main()
{
    int sp,tp,tcp,cp,cp1;
	printf("\tEnter the selling price of 15 items : ");
	scanf("%d",&sp );
	printf("\tEnter the profit earned on these items : ");
	scanf("%d",&tp);
	cp = sp - tp;//tp = sp - cp
	cp1 = cp/15;
	printf("\nThe cost price of one item is %d",cp1 );
	return 0;

}

