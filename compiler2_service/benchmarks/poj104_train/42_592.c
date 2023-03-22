#define NUM_ITER 50580

#include <header.h>

int main_bench()
{
	int n,*p,a[100000],m,chongfu=0;
	my_scanf("%d",&n);
    for(p=a;p<a+n;p++)
	my_scanf("%d",p);
	my_scanf("%d",&m);
	for(p=a;p<a+n;p++)
	{
	
        if(*p==m)  chongfu++;
                  
         else if(*p!=m)  *(p-chongfu)=*p;
		 
	}
	for(p=a;p<a+n-chongfu-1;p++)
		my_printf("%d ",*p);
	my_printf("%d",*(a+n-chongfu-1));
}   
