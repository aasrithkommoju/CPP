#include<stdio.h>
int sum(int x,int y)
{
	int z;	
	z=x+y;
	return z;
}
int main()
{
	int a,b,c;
	printf("enter the two numbers for sum\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum is %d",c);
	return 0;
}
