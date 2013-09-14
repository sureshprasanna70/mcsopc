#include<stdio.h>
int revno(int x)
{
	int a1=0;
while(x!=0)
	{
		a1=(a1*10)+(x%10);
		x=x/10;

	}
	return a1;
}
int main()
{
	int n,a=15,b=10,sum=0;
	int a1=0,b1=0,sum1=0;
	scanf("%d",&n);
	while(n!=0)
	{
		scanf("%d %d",&a,&b);
		a1=revno(a);
		b1=revno(b);
		sum=a1+b1;
		sum1=revno(sum);
		printf("%d\n",sum1);
		n--;	
	}
	
	
}