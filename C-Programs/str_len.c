#include<stdio.h>
void str_length()
{
	char a[]="likitha";
	int i, length=0;
	for(i=0;a[i]!='\0';i++)
	{
		printf("length of a string is %d\n",length);
		length++;
	}

}
int main()
{
	str_length();
}
