#include<stdio.h>
int main()
{
	int c , *p;
	printf("Enter c value:");
	scanf("%d",&c);
	p = &c;
	printf("%d",*p);
	return 0;
}
