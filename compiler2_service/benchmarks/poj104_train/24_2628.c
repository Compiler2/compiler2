#define NUM_ITER 32871

#include <header.h>

void bubble(int a[],int l)
{
	int i,j;
	int t;
	for(i=1;i<l;i++)
		for(j=0;j<l-i;j++)
			if(*(a+j)>*(a+j+1))
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
}
int main_bench()
{
	int i,j,k,n,min=50,max=0,maxt,mint;
	int l[503]={0};
	char c[203][50]={0};
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%s",c+i);
		*(l+i)=strlen(c+i);
	}

    for(i=0;i<n;i++)
	{
		if(*(l+i)>max)
		{
            max=*(l+i);
			maxt=i;
		}
		if(*(l+i)<min)
		{
			min=*(l+i);
			mint=i;
		}
	}
	if(min==max)
		my_printf("%s\n%s",c,c);
	else
		my_printf("%s\n%s",*(c+maxt),*(c+mint) );

}