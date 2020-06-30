#include<stdio.h>
/* Set 2: volume of sphere */
int main()
{
	int r;
	float volume;
	printf("\t Enter radius: \n");
	scanf("%d",&r );
	volume = (4/3.0)*3.14*(r*r*r);
	printf("Volume of sphere is: %f\n",volume );
	return 0 ;
		
}