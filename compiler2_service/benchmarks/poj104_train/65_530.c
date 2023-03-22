#define NUM_ITER 31511

#include <header.h>

int main_bench()
{
	int a[1000],b[1000];
	int n,i,z=0,x=0;
	my_scanf ("%d",&n);
	for(i=0;i<=n-1;i=i+1){
		my_scanf ("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<=n-1;i=i+1){
       if(a[i]==0&&b[i]==1)
		   z=z+1;
	   else if(a[i]==0&&b[i]==2)
		   x=x+1;
	   else if(a[i]==1&&b[i]==0)
		   x=x+1;
	   else if(a[i]==1&&b[i]==2)
           z=z+1;
	   else if(a[i]==2&&b[i]==0)
		   z=z+1;
	   else if(a[i]==2&&b[i]==1)
		   x=x+1;
	   else if(a[i]==b[i])
		   z=z+0;
	       x=x+0;
	}
	if(z>x)
		my_printf("A");
	if(z<x)
		my_printf("B");
	if(z==x)
		my_printf("Tie");
	return 0;
}