#define NUM_ITER 47329

#include <header.h>

int main_bench()
{
    int n,m;
    int a[100001];
    int *p;
    my_scanf("%d",&n);
    for(p=a;p<a+n;p++)
    my_scanf("%d",p);
    my_scanf("%d",&m);
    for(p=a;p<(a+n);p++)
    {
    	if(*p==m)
    	{
    		int *q;
    		for(q=p;q<(a+n-1);q++)
    		*q=*(q+1);
    		n=n-1;
    		p=p-1;
    	}
    }
    for(p=a;p<a+n-1;p++)
    my_printf("%d ",*p);
    my_printf("%d",*p);
}