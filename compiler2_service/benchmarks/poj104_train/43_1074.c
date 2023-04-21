#define NUM_ITER 8893

#include <header.h>

int main_bench()
{
   int m,i,k,t,s=0,p=0;
   my_scanf("%d",&m);
   i=3;
   k=1;
   t=1;
   while(i<=m/2)
   {
	   while(k<=i)
	   {if(i%k==0)
			s=s+1;
		   else;
		   k=k+1;}
	   if(s==2)
	   {
		   while(t<=m-i)
		   {if((m-i)%t==0)
		      p=p+1;
		      else;
			  t=t+1;}
		   if(p==2)
			   my_printf("%d %d\n",i,m-i);
		   else;
	   }
	   else;
	   s=0;
	   p=0;
	   t=1;
	   k=1;
	   i=i+1;
   }
return 0;
}