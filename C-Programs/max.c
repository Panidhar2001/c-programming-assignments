#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("max of two numbers is: %d",a);
		}else{
		printf("max of two numbers is:%d",b);
		}
	return 0;
}
