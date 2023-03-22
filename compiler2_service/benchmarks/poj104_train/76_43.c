#include <header.h>

struct qujian
{
	int a;
	int b;
}qj[50000];

int main_bench()
{
	int n,i,j,temp,left,right,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&qj[i].a,&qj[i].b);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(qj[i].a>qj[j].a)
			{
				temp=qj[i].a;
				qj[i].a=qj[j].a;
				qj[j].a=temp;
				temp=qj[i].b;
				qj[i].b=qj[j].b;
				qj[j].b=temp;
			}
		}
	}
	left=qj[0].a;
	right=qj[0].b;
	k=1;
	while(k>0)
	{
		if(k==n)
		{
			my_printf("%d %d\n",left,right);
			break;
		}
		else
		{
			if(qj[k].a>right)
			{
				my_printf("no\n");
				break;
			}
			else
			{
				if(qj[k].a<left)
				{
					left=qj[k].a;
				}
				if(qj[k].b>right)
				{
					right=qj[k].b;
				}
				k++;
			}
		}
	}
	return 0;
}



	
	