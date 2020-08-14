#include<stdio.h>
int main()
{
	int N, S[100], i, temp[100],j,min;
	printf("Enter the number of horses :\n");
	scanf("%d",&N);
	printf("Enter the skill levels :\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&S[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=(i+1);j<N;j++)
		{
			if(S[i]>S[j])
			{
				temp[i]=S[i]-S[j];
			}
			else
			temp[i]=S[j]-S[i];
		}
	}
	for(i=0;i<(N-1);i++)
	{
		if(temp[i]>temp[i+1])
		min=temp[i+1];
	}
	printf("minimum skill diff is %d",min);
}
