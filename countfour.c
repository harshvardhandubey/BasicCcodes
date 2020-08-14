#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,temp[100],rem,n[100],sum,count,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{
		count=0;
		temp[i]=n[i];
		while(temp[i]!=0)
		{
			rem=temp[i]%10;
			if(rem==4)
				count++;
			temp[i]=temp[i]/10;
		}
		printf("\n%d",count);
	}
	
}
