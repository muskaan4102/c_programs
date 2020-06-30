#include<stdio.h>
/*Set 2:Reversing the order of the five-digit number*/
int main()
{
	int num,temp,rem,rev;
	printf("\tEnter any five-digt number: ");
	scanf("%d",&num );
	
	temp = num;
	
	rem = temp % 10;      //12345 % 10 = 5  
	rev = rem;			  //rev = 5	 
	temp = temp / 10;	  //12345 / 10 = 1234 	  
	
	rem = temp % 10;      //1234 % 10 = 4  
	rev  = rev * 10 + rem; //rev = 5*10 + 4 = 54	 
	temp = temp / 10;	  //1234 / 10 = 123
	
	rem = temp % 10;      //123 % 10 = 3  
	rev  = rev * 10 + rem;//rev = 54*10 + 3 = 543	 
	temp = temp / 10;	  //123 / 10 = 12
	
	rem = temp % 10;      //12 % 10 = 2  
	rev  = rev * 10 + rem; //rev = 543*10 + 2 = 5432
	temp = temp / 10;	  //12345 / 10 = 1234
	
	rem = temp % 10;      //1 % 10 = 1
 	rev  = rev * 10 + rem;//rev = 5432*10 + 1 = 54321	 
	temp = temp / 10;	  //1 / 10 = 0
	
	printf("\tThe reverse of the given number: %d",rev );
	return 0;
}