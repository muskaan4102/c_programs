#include<stdio.h>
/*from video 5: Converting the characters in their ASCII code*/
int main()
{
	int num;
	char ch;
	printf("\tEnter any character : ");
	scanf("%c",&ch );
    num = ch;
	printf("\t\nThe character %c, ASCII code %d ",ch,num );
	return 0;
}