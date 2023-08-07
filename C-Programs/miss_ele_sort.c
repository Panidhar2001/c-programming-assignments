#include<stdio.h>
int main()
{
	int a[]={6,7,8,9,10,11,13,14,15,16,17};
	int len = sizeof(a)/sizeof(int);
	int max=a[len-1];
	int sum=0,r,res,s,sum1,dif;
	sum=(max*(max+1))/2;
	r=a[0];
	res=((r-1)*r)/2;
	sum1=sum-res;
	for(int i=0;i<len;i++)
	{
		s=s+a[i];
	}
	dif=sum1-s;
	printf("The missing element is %d\n",dif);
}

