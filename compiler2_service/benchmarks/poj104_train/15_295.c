#define NUM_ITER 569

#include <header.h>

int main_bench(){
	int n,i,j,x,y,p,q,s,t,a[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(*(*(a+i)+j)==0)
		{x=i;y=j;break;}
	for(p=n-1;p>=0;p--)
			for(q=n-1;q>=0;q--)
				if(*(*(a+p)+q)==0)
		{s=p;t=q;break;}
		my_printf("%d",(x-s-1)*(t-y-1));
	return 0;}
