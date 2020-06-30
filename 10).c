#include<stdio.h>
/*Set 2: Converting distance from km to feet , inch , cm , m*/
int main()
{
	int d_km,d_m,d_c;
	float d_f,d_i;
	printf("\t Enter distance between two cities in km: ");
	scanf ("%d",&d_km );
	d_m = d_km*1000;
	d_f = d_km*3280.83;
	d_i = d_km*39370.07;
	d_c = d_km*100000;
	printf("\tIn metres %d,In feet %f,In inches %f,In centimetres %d",d_m,d_f,d_i,d_c );
	return 0 ;
}	
	