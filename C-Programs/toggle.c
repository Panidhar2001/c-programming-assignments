#include<stdio.h>
int main()
{
	int n1,bitmask,n2;
	printf("Enter a num:");
	scanf("%d",&n1);
	bitmask=(1<<3)|(1<<4)|(1<<5);
	n2=n1^bitmask;
	printf("%d",n2);
}
	

