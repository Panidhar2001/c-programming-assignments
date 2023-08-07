#include<stdio.h>
void sum_array()
{
	int i,sum=0, a[10];
	printf("Enter any 10 elements :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("the sum of given array elements is = %d",sum);

}
int main()
{
	sum_array();
}
