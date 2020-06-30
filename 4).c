#include<stdio.h>
/*Set 2: input ten numbers and calculate their sum*/
int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,result;
	printf("Enter first number: \n");
	scanf("%d",&n1);
	printf("Enter second number: \n");
	scanf("%d",&n2);
	printf("Enter third number: \n");
	scanf("%d",&n3);
	printf("Enter fourth number: \n");
	scanf("%d",&n4);
	printf("Enter fifth number: \n");
	scanf("%d",&n5);
	printf("Enter sixth number: \n");
	scanf("%d",&n6);
	printf("Enter seventh number: \n");
	scanf("%d",&n7);
	printf("Enter eighth number: \n");
	scanf("%d",&n8);
	printf("Enter ninth number: \n");
	scanf("%d",&n9);
	printf("Enter tenth number: \n");
	scanf("%d",&n10);
	result = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	printf("sum  = %d\n",result);
	printf("[%d+%d+%d+%d+%d+%d+%d+%d+%d+%d = %d]",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10, result);
	return 0;
	
}