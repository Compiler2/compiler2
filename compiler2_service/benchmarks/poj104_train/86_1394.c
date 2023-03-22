#define NUM_ITER 1153

#include <header.h>

int main_bench()
{
	int n,m,t=0,num,i,j,k=0,p=1,q=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		p=1;
		k=0;
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&num);
			k++;
			t=num+3*k;
			if(t>=60&&t-3<=60&&p==1){my_printf("%d\n",num);p=0;}
			if(t-3>=60&&p==1){my_printf("%d\n",60-(k-1)*3);p=0;}
		}
		if(t-3<=60&&p==1){my_printf("%d\n",60-3*k);p=0;}
	}
	return 0;
}