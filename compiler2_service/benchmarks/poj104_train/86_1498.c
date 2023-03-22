#define NUM_ITER 1172

#include <header.h>

int main_bench()
{ 
	int n,m,k,i,c,d,a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&m);
		c=0;
		for(d=0;d<m;d++){
			my_scanf("%d",&k);
			if(c+k<60)
				if(c+k+3<60)
					c+=3;
				else
					c=60-k;
		}	
	a[i]=60-c;
	}
	for(i=0;i<n;i++){
		my_printf("%d\n",a[i]);
	}
	return 0; 
}
