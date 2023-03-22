#define NUM_ITER 1675582

#include <header.h>

int main_bench()
{
	int a[300],i,n=0,k=1,m;
	char p;
	my_scanf("%d%c",&a[1],&p);
	while(p==',')
	{
		k++;
		my_scanf("%d%c",&a[k],&p);
	}
	if(k==1){my_printf("No");}
	else
	{
	    m=a[1];
		for(i=2;i<=k;i++){if(m<a[i])m=a[i];}
		for(i=1;i<=k;i++){if(a[i]>n&&a[i]!=m)n=a[i];}
		if(n==0){my_printf("No");}
        else{my_printf("%d",n);}
	}
	return 0;
}