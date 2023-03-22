#include <header.h>

	struct num
	{
		int a;
		struct num *next;
	};
int main_bench()
{
	struct num *head,*p1,*p2;
	int n,i,m;
	my_scanf("%d%d",&n,&m);
	p1=(struct num *)malloc(sizeof(struct num));
	my_scanf("%d",&p1->a);
	head=p1;
	p2=head;
	for(i=1;i<n;i++)
	{
		p1=(struct num *)malloc(sizeof(struct num));
		my_scanf("%d",&p1->a);
		p2->next=p1;
		p2=p2->next;
	}
	p1->next=head;
	for(i=0;i<=n-m;i++)
	{
		p2=p2->next;
	}
	for(i=1;i<n;i++)
	{
		my_printf("%d ",p2->a);
		p2=p2->next;
	}
	my_printf("%d",p2->a);
}

