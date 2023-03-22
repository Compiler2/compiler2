#define NUM_ITER 3982

#include <header.h>

int main_bench()
{
    int n,a,p,q,g,r;

    g=0;
	r=0;
	int i,j,m;
	my_scanf("%d",&n);
	if(n<3){
		my_printf("empty");
	}
	for(i=3;i<=n;i++){
		a=0;
		for(j=2;j<i;j++){
		
			m=i%j;
			if(m==0){
				a++;
			}
		
		}
		
		if(a==0&&g!=0){
			p=q;
			q=i;
			if((q-p)==2){
				my_printf("%d %d\n",p,q);
				r++;

			}
		}
	    if(a==0&&g==0){
			q=i;
			g++;
			
		}

	}
	if(r==0){
		my_printf("empty");
	}

	return 0;
}

