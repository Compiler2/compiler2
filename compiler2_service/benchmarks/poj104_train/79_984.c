#define NUM_ITER 76

#include <header.h>


struct mon
{
	int a;
	struct mon *next;
};

struct mon *app(int n)
{
	struct mon *newnode, *head, *thisnode;
	int i;
	
	for(i=1;i<=n;i++)
	{
		newnode=(struct mon *)malloc(sizeof(struct mon));
		newnode->a =i;
		if(i==1)
		{
			head=newnode;
			thisnode=head;
		}
		else
		{
			thisnode->next =newnode;
			thisnode=newnode;
		}
		
	}
	thisnode->next =head;
	return head;
}

void shuchu(int n, int m)
{
	struct mon *head;
	int i;
	head=app(n);

	do
	{
	for(i=1;i<m-1;i++)
		head=head->next ;
	head->next =head->next ->next ;
	head=head->next ;
	}while(head->next !=head);

	my_printf("%d\n",head->a );

}


int main_bench()
{
	int n,m,sign=1;

	for(;sign;)
	{
		my_scanf("%d%d",&n, &m);
		if(m==1)
			my_printf("%d\n",n);
		else
		{
		if(n!=0)
			shuchu(n, m);
		else sign=0;
		}
	}
	
	return 0;
}
