#include<stdio.h>
void ternary()
{
	int a,b,c,max;
	printf("Enter three num:");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("maximum of three num is %d",max);

}
int main()
{
	ternary();
}
