#include<stdio.h>
/*Set 2 : Adding one to every digit in a five-digit number without having a carry*/
int main()
{    
    int num,rem,temp,result;
	printf("\nEnter any five-digit number: ");
	scanf("%d",&num );
	
	temp = num;
	
	//unit place digit                   
	rem = temp % 10;							//12391 % 10  = 1
	result = ((rem + 1) % 10)* 1; 	   			//((1+1)%10)*1 = 2%10 = 2* 1 = 2
	temp = temp / 10;    						//12391/10= 1239
	
	//tenth place digit
	rem = temp % 10; 							//1239 % 10 = 9
	result = ((rem + 1) % 10)* 10 + result; 	//((9+1)%10)*10 + 2 = 10%10 = 0*10 + 2 = 2
    temp = temp / 10; 							//1239/10= 123
	
	//hundredth place digit
	rem = temp % 10;							//123%10 = 3
    result = ((rem + 1) % 10)* 100 + result; 	//((3+1)%10)*100 + 2 = 402
	temp = temp / 10; 							//123/10=12
	
	//thousandth place digit
	rem = temp % 10;							//12%10 = 2
	result = ((rem + 1) % 10)* 1000 + result;	//((2+1)%10)*1000 +402 = 3402
	temp = temp / 10; 							//12/10=1
	
	//ten thousandth place digit
	rem = temp % 10;							//1%10 = 1
	result = ((rem + 1) % 10)* 10000 + result; 	//((1+1)%10)*10000 + 3402 = 23402
	temp = temp / 10; 							//1/10=0
	
	printf("\nThe result is %d",result );
	return 0;

}

// [rem+1] = for adding 1 in each digit, [%10] = for not getting a carry 1 as 10 % 10 = 0
// [*1,10,100,1000,10000] = for different place digits, [+result] = for adding previous result