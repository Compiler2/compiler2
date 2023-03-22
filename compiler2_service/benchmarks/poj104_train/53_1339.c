#define NUM_ITER 6045

#include <header.h>

int main_bench()
{
	int n,a[300],i,x,b[300],y=0,c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		c=0;
		if(i==0){
		  b[y]=a[i];
		  y++;}
		else {
			for(x=0;x<i;x++){
				if(a[i]!=a[x])
					c++;
			}
			if(c==i){
				b[y]=a[i];
				y++;}
		}
	}
	my_printf("%d",b[0]);
	for(i=1;i<y;i++)
		my_printf(",%d",b[i]);


	return 0;
}
