#define NUM_ITER 46562

#include <header.h>

int main_bench()
{
	int a[100000],*p,n,i,k,*p1,num=0,t;
	my_scanf("%d\n",&n);
	for(p=a;p<a+n;p++)
	   my_scanf("%d",p);
    my_scanf("\n");
    my_scanf("%d",&k);
    for(p=a;p<a+n;p++)
       if(*p==k)
       {
       	p1=p;t=0;
       	while(*p1==k)
       	{p1++;num++;t++;}
       	for(i=0;p+i<a+n;i++)
       	*(p+i)=*(p1+i);
       }
    n-=num;
    for(p=a;p<a+n-1;p++)
       my_printf("%d ",*p);
    my_printf("%d\n",*p);
}