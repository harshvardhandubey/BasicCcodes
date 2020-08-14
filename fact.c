#include<stdio.h>
int main()
{
	int t,n[100],i,fact,c;
	scanf("%d",&t);
	if(t>0&&t<=100)
	{
		for(i=1;i<=t;i++)
		{
			scanf("%d",&n[i]);
		}
		for(i=1;i<=t;i++)
		{
			fact=1;
			for(c=1;c<=n[i];c++)
			{
				fact=fact*c;
			}
			printf("%d\n",fact);
		}
	}
	return 0;
}
