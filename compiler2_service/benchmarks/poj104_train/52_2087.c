#include <header.h>

int main_bench()
{
	void move(int num[],int m,int n);
	int num[100],m,n,i;
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&num[i]);
	}
	move(num,m,n);
	my_printf("%d",num[0]);
	for(i=1;i<m;i++)
	{
		my_printf(" %d",num[i]);
	}
	my_printf("\n");
}
void move(int num[],int m,int n)
{
	int *p,end;
	end=*(num+m-1);
	for(p=num+m-1;p>num;p--)
		*p=*(p-1);
	*num=end;
	n--;
	if(n>0)
		move(num,m,n);
}
