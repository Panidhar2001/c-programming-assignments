#include<stdio.h>
void conversion()
{
	int num;
	printf("Enter a num :");
	scanf("%d",&num);
	printf("Given num in decimal %d\n",num);
	printf("Given num in octal %o\n",num);
	printf("Given num in hexa %X\n",num);
}
int main()
{
	conversion();
}
