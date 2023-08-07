#include<stdio.h>
int main()
{
	int n[10];
	printf("Enter 10 elements:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	int maxval=n[0];
	for(int i=1;i<10;i++)
	{
		if(n[i]>maxval)
		{
			maxval=n[i];
		}
	}
	printf("maxval is %d",maxval);
}
