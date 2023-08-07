#include<stdio.h>
int main()
{
	int i;
	char ch[]={'I','N','D','I','A'};
	printf("ASCII values \n");
	for(i=0;i<5;i++)
	{
		printf("%c: ascii value is %d\n",ch[i],ch[i]);
	}
	return 0;
}
