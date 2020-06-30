#include<stdio.h>
/*Set 2 : Finding area and  perimeter of both rectangle and circle*/
int main()
{
	int l,b,ar,pe,r;
	float ar_c,ccf,pie = 3.14;
	printf("\tEnter length of the rectangle: ");
	scanf("%d",&l); 
	printf("\tEnter breadth of the rectangle: ");
	scanf("%d",&b);
	ar = l*b;
	pe = 2*(l+b);
	printf("\tThe area is %d and perimter of the rectangle is %d\n ",ar,pe );
	printf("\tEnter radius of the circle: ");
	scanf("%d",&r); 
	ar_c = pie*r*r;
	ccf = 2*pie*r;
	printf("\tThe area is %f and circumference of the circle is %f ",ar_c,ccf );
	return 0;

}	