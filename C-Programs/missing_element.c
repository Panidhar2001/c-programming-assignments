#include<stdio.h>
int main()
{
	int a[]={6,7,8,9,10,11,13,14,15,16,17};
	int i,sum=0,sum1=0,sum2=0;
	int len=sizeof(a)/sizeof(int);
	for(i=0;i<len-1;i++)
	{
		sum=sum+a[i];
	}
	for(i=a[0];i<a[len-1];i++)
	{
		sum1=sum1+i;
	}
	sum2=sum1-sum;
	printf("The missing element is %d\n",sum2);
}


