#define NUM_ITER 9917

#include <header.h>


int main_bench()
{
	int m,i,j,p,q;
	my_scanf("%d",&m);
	
	for(j=3;j<=m/2;j++){
		p=0;
	
		for(i=2;i<j;i++){if(j%i!=0)p=p+1;}
		if(p==j-2){q=0;
		
		for(i=2;i<m-j;i++){if((m-j)%i!=0)q=q+1;}
			if(q==m-j-2)
				my_printf("%d %d\n",j,m-j);}}
	
	return 0;
}