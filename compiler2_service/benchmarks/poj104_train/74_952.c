#include <header.h>


int main_bench()
{
	int i,j,m,n,k=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{    

		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
             break;
		}
		if(j>=i/2)
		{   int a,b,c;
		    a=i;
			b=0;
		    while(a>0)
			{
				c=a%10;
				b=b*10+c;
				a=a/10;
			}
         if(i==b)
		 {     
			 if(k==0)
			 {           
			   my_printf("%d",i);
			   k++;
			 } 
		       else
			   {
				   my_printf(",%d",i);
				   k++;
			   }
		 }
		} 
	}
	      if(k==0)   
			  my_printf("no\n");
}
