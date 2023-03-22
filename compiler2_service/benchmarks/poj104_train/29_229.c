#include <header.h>

int main_bench()
{
	int m,i,n,j,a,b,t;
	my_scanf("%d",&m);
    for(i=0;i<m;i++){
		float sum=0;
	    my_scanf("%d",&n);
		int a1=1,a2=1,b1=0,	b2=1;
		for(j=0;j<n;j++){
			a=a1+a2;
			b=b1+b2;
			sum=sum+1.0*a/b;
			t=a;
			a1=a2;
            a2=t;
            t=b;
			b1=b2;
            b2=t;
		}
		my_printf("%.3f\n",sum);
	}
    return 0;
}
