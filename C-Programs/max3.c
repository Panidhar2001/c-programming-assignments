#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		printf("Max of three numbers is %d",a);
	else if(b>c)
		printf("Max of thtree numbers is %d",b);
	else
		printf("Max of three numbers is %d",c);
	return 0;
}
