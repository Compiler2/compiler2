#define NUM_ITER 4164

#include <header.h>

int main_bench()
{
	int n,a,b,p,q,s,e,f;
	int m=0;
	int sz[50000][2];
    my_scanf("%d",&n);
	for(b=0;b<n;b++)
    {
		for(a=0;a<2;a++)
        {
			my_scanf("%d",&sz[b][a]);
		}
	}
	
	
	for(s=1;s<=n;s++)
	{
		for(b=0;b<n-s;b++)
		{
		if(sz[b][0]>sz[b+1][0])
		{
		e=sz[b+1][0];f=sz[b+1][1];
        sz[b+1][0]=sz[b][0];sz[b+1][1]=sz[b][1];
		sz[b][0]=e;sz[b][1]=f;
		}
		}
	}

     
    
	p=sz[0][0];
     q=sz[0][1];
	     for(b=1;b<n;b++)
    {
	
			
			 if((p<=sz[b][0])&&(q>=sz[b][0])&&(q<=sz[b][1]))
			{

			q=sz[b][1];
			m++;
			}
            
           else if((p<=sz[b][0])&&(q>=sz[b][1]))
			{
			p=p;
			q=q;
			m++;
			}
           
            else  
			{   m=0;
				my_printf("no");
			    break;
			}

	}
     
	if(m!=0) 
		my_printf("%d %d",p,q);
return 0;
}