#define NUM_ITER 46937

#include <header.h>

int main_bench()
{
	int a[1000]; 
	int b[1000];
	int i,j=0,n,k,l,t;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
		if(a[i]<=k)  
		{  
			b[j]=a[i];
			j++;
		}
    for(i=0;i<j-1;i++)
		for(l=i+1;l<j;l++){
			t=b[i]+b[l];
			if(t==k)  
			{
				my_printf("yes");
				goto loop;
			}
		}
     if(i>=(j-1))  my_printf("no");
loop:  my_printf("\n");
}
