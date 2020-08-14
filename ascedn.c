#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,n[100],j,temp;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("\n%d",n[i]);
	}
}
