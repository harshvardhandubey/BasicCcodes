#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,a[10],i,sum[10]={0,0,0,0,0,0,0,0,0,0},j,temp,flag,array[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j<=n)
		{
			flag=1;
			if(flag<3)
			{
				sum[i]=sum[i]+a[j];
				j++;
				flag++;
			}
		}
	}
	for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=(n - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
	printf("%d",array[n]);
}
