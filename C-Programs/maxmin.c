#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int min,max;
	max=min=a[0];
	for(int i=1;i<10;i++)
	{
		if(a[i] > max)
			max=a[i];
		if(a[i] < min)
			min=a[i];
	}
	printf("max= %d",max);
	printf("min= %d",min);
}
