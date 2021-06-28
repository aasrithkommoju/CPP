#include<stdio.h>
int main()
{
	int a=6;
	for(int m=1;m<=10;m++)
	{
		for(int i=1;i<=9;i++)
		{
			if(i<=2||i>=8)
			{
				printf("X");
				for(int j=1;j<=a;j++)
				printf("-");
				printf("X");
				printf("\n");
			}
			else if(i==3||i==7)
			{
				printf(" X");
				for(int j=1;j<=a-2;j++)
				printf("-");
				printf("X");
				printf("\n");
			}
			else if(i==4||i==6)
			{
				printf("  X");
				for(int j=1;j<=a-4;j++)
				printf("-");
				printf("X");
				printf("\n");
			}
			else 
			{
				printf("   X");
				for(int j=1;j<=a-6;j++)
				printf("-");
				printf("X");
				printf("\n");
			}
		}
	}
}
