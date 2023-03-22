#include <header.h>


int main_bench()
{  
	int n,m;
    my_scanf("%d",&n);
	int i,j;
	int a[100];  int b[100]={0};  int c[100]={0};
	int d[100]={0};
	int e,f,h;
	for(i=0;i<n;i++)
	{ 
		my_scanf("%d",&m);
		if(m==0)
			my_printf("60\n");
		else
		{
		for(j=0;j<m;j++)
		{
        my_scanf("%d",&a[j]);
        e=a[j]+3*j;
		h=e+3;
        
	  
		if(e<= 60 && h < 60)
					
			{
				
				f=60-3*(j+1);
				continue;
			}

		if(e <= 60 && h >= 60)
		{
		f =a[j];
	   
		}   continue;
		if(e>60)
        {
		f=60-3*j;
		continue;
		}	


			
		}
		my_printf("%d\n",f);
			

		
	}
	}

	return 0;
}
