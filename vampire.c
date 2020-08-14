#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node { 
    int data; 
    struct node* link; 
}; 
	void mult(int a, int b);
	void display();
	int vamp, i, j, a, b;
	struct node* start = NULL; 
	struct node* ptr = NULL;
	struct node* ptr1 = NULL;
int main()
{
	
	printf("Enter the number to be checked : ");
	scanf("%d",&vamp);
	for(i=1;i<=vamp;i++)
	{
		if(vamp%i==0)
		{
			if(start==NULL)
			{
				start=(struct node*)malloc(sizeof(struct node));
				start->data=i;
				start->link=NULL;
				ptr=start;
			}
			else
			{
				ptr1=(struct node*)malloc(sizeof(struct node));
				ptr->link=ptr1;
				ptr1->data=i;
				ptr1->link=NULL;
				ptr=ptr1;
			}
		}
	}
	ptr=start;
	ptr1=ptr->link;
	mult(ptr->data,ptr1->data);
	return 0;
}
void mult(int a,int b)
{
	if(a*b==vamp)
	{
		printf("\nALOHA");
		printf("\n%d\n%d",ptr->data,ptr1->data);
		ptr=ptr->link;
		ptr1=ptr->link;
		mult(ptr->data,ptr1->data);
	}
	else
	{
		ptr1=ptr1->link;
		mult(ptr->data,ptr1->data);
	}
}
