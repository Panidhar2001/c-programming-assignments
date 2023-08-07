#include<stdio.h>
int main()
{
	int a,b,c,d;
	float avg;
	printf("Enter four numbers:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	avg=(a+b+c+d)/4.0;
	printf("The average of four numbers is %f",avg);
	return 0;
}


