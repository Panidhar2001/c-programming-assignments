#include<stdio.h>
#include<string.h>
int main()
{
	char input[]="Rama is a good boy";
	int i,len=strlen(input);
	for(i=0;i<len;i++)
	{
		if(input[i]==' ')
		{
			input[i]=',';
		}
	}
	printf("%s\n",input);
}

