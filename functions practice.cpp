#include<stdio.h>
void input(int x,int y)
{
	int f,g;
	printf("enter any two numbers to add\n");
	scanf("%d%d",&f,&g);
}
int main()
{
	int a,b,c;
	input(a,b);
	c= a + b;
	printf("%d %d",a,b);
	return 0;
}
