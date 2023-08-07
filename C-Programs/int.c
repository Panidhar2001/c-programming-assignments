#include<stdio.h>
int fun(int n)
{
	static int i=1;
	if(n>=5){
		return n;
	}else{
		n=n+i;
		i++;
		return fun(n);
	}
}
int main()
{
	int n=1;
	printf("%d",fun(n));
}
