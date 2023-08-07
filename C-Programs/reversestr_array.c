#include<stdio.h>
#include<string.h>
void reversestr_array()
{
	int i,j;
	char x;
	char A[10]="panidhar";
	printf("string A = %s\n",A);
	int len=0;
	for (i=0;A[i]!='\0';i++)
	{
		len++;
	}
	printf("length of A is %d\n",len);
	for(i=0,j=len-1;i<(len/2);i++,j--)
	{
		x=A[i];
		A[i]=A[j];
		A[j]=x;
	}
	printf("reverse string is %s\n",A);
}
int main()
{
	reversestr_array();
}
