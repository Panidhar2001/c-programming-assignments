#include<stdio.h>
int casecon()
{
	char input;
	printf("enter the input:");
	scanf("%c",&input);
	if(input>=65 && input<=90)
	{
		printf("Given input is uppercase\n");
		printf("input in lowercase is = %c\n",input+32);
	}
	else if(input>=97 && input<=122)
	{
		printf("Given input is lowercase\n");
		printf("input in uppercase is = %c\n",input-32);
	}
}
int main()
{ 
	casecon();
}

