#include <header.h>

int main_bench()
{
	int m,n,i,t;
	 my_scanf("%d",&m);
	 if(m<5)
		 my_printf("empty");
	 for(n=3;n<m-1;n=n+2)
	 {
           t=0;
		   for(i=3;i<n;i=i+2)
		   {
			   if((n%i)==0)
			   {
				   t=1;
				   break;
			   }
		   }
		   if(t==0)
           {
			   int k=n+2;
			   for(i=3;i<k;i=i+2)
		   {
			   if((k%i)==0)
			   {
				   t=1;
				   break;
			   }
		   }
		   }
		   if(t==0)
			   my_printf("%d %d\n",n,n+2);
		   }
	return 0;
}