#include<stdio.h>
void bitwise_and()
{
	unsigned int n=100;
	unsigned int  bitmask=1<<3;
	unsigned int res;
	res = n&bitmask;
	if(res==0)
		printf("bit 3 is off\n");
	else 
		printf("bit 3 is on\n");

}
int main()
{
	bitwise_and();
}

