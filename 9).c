#include<stdio.h>
/*Set 2: Finding Ramesh's gross salary*/
int main()
{
	int bs;
	float da,hra,gs;
	printf("\tEnter Ramesh's Basic Salary : ");
	scanf("%d",&bs );
	da =  bs*0.4;
	hra = bs*0.2;
	gs = bs - (da + hra);
	printf("\t His Gross salary is:%f \n", gs );
	return 0;
	
	
}