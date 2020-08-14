#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,a[100],b[100],c[100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<t;i++)
	{
		if((a[i]+b[i]+c[i])==180)
		{
			printf("\nYES");
		}
		else
		{
			printf("\nNO");
		}
	}
	
}
