#include<stdio.h>
/*Set 2: Finding the third angle*/
int main()
{
	int a,b,c;
	printf("\t Let first angle be a : \n");
	scanf("%d",&a);
	printf("\t Let second angle be b : \n");
	scanf("%d",&b);
	c = 180 - ( a + b );
	printf("\t The third angle of a triangle is:%d ",c);
	return 0;
}