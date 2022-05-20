#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number");
	scanf("%d", &a);
    int	temp=a;
	while(a>0)
	{
		b=a%10;
        c=c+(b*b*b);
        a=a/10;
	}
	if(c==temp)
	{
	printf("armstrong");
    }
    else
    {
    	printf("not armstrong");
	}
}
