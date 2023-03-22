#define NUM_ITER 2097

#include <header.h>

int main_bench()
{
	int n,i,sz[1000],s=0,m,l,j,k;
	my_scanf("%d",&n);
	k=0;
	for(i=2;i<=n-2;i++)
    {
        s=0;
		for(j=1;j<=i;j++)
		{   
			if(i%j==0)
				s=s+1;
		}  
        m=0;
		
		for(j=1;j<=i+2;j++)
		{
			if((i+2)%j==0)
				m=m+1;
		}
		
		
		
		if((m==2)&&(s==2))
		{  k=k+1;
		my_printf("%d %d\n",i,i+2);}
	}   
	
	if(k==0)
		my_printf("empty");
	
	return 0;
}