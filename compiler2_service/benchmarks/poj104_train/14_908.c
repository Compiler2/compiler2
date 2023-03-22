#define NUM_ITER 17050

#include <header.h>


int main_bench()
{
	struct student{
		long num;
		long chinese;
		long maths;
		long sum;
	}t[100000];
	long n,i,j,k,tmp;
	my_scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%ld %ld %ld",&t[i].num,&t[i].chinese,&t[i].maths);
	}
    for(i=0;i<n;i++)
	{
		t[i].sum=t[i].chinese+t[i].maths;
	}
	for(i=0;i<3;i++)
	{
        k=i;
		for(j=i+1;j<n;j++)
		{
			if(t[j].sum>t[k].sum)
				k=j;
		}
		tmp=t[i].sum;
		t[i].sum=t[k].sum;
		t[k].sum=tmp;

		tmp=t[i].num;
		t[i].num=t[k].num;
		t[k].num=tmp;
	}
	for(i=0;i<3;i++)
	{
	    my_printf("%ld %ld\n",t[i].num,t[i].sum);
	}
	return 0;
}