#include <header.h>

int main_bench()
{
	int a,b,T,i,j=0,k,K=0;
	my_scanf("%d",&T);
	
    for(i=0;i<T;i++)
    {
       my_scanf("%d%d",&a,&b);
	   if(b<=90&&b>=60&&a>=90&&a<=140)
	   { 
		   j=j+1;
		   k=j;
          if (K<k)
		  { K=k;
		   }
	   }
	   else 
	   {
		   
	      k=0;
		  j=0;
	   }
	}
	my_printf("%d",K);
}