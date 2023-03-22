#define NUM_ITER 1112087

#include <header.h>

int main_bench()
{
	int m,n,i,b,r,q=0,l=0,j,p;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{q=0;
        p=i;
		for(j=2;j<=i;j++)
		{
			if(i%j==0){
				b=j;
				break;}	
		}
		
    while(p!=0)
	{
    r = p % 10;
    q *= 10;
    q +=r;
    p /= 10;
	}
	if(q==i&&b==i)
	{
		if(l==0) {
		  my_printf("%d",i);l++;}
	 else 
	 {
		 my_printf(",%d",i);
            
	 }
		
	}
	

	}	
	if(l==0) 
		my_printf("no");

return 0;
}
