#include<stdio.h>
void bitwise_while()
{
	unsigned int n=115;
	unsigned int  bitmask;
	unsigned int res;
	int i=31;
	while(i>=0)
	{
		bitmask=1<<i;
		res = n&bitmask;
		if(res==0)
			printf("0");
		else 
			printf("1");
		i--;
	}
	printf("\n");
}
int main()
{
	bitwise_while();
}

