#define NUM_ITER 144

#include <header.h>


int main_bench()
{   
   int i,j,k[16],a,p,b,c,q;
   for(i=1;i<1000;i++)
   {
	   p=0;q=0;
	   for(j=0;j<16;j++)
	   {
		   my_scanf("%d",&a);
         if(a==-1) break;
         else if(a!=-1)
		 { 
		   if(a==0) break;
		   else	 
		   {
			   k[j]=a;
		       p++;
		   }
		 }
	   }
	  if(a==-1) break;
	  for(b=0;b<p;b++)
	  {
		   for(c=0;c<p;c++){ 
	           if(k[b]-2*k[c]==0)
			   q++;
		  }
	  }	   
	  my_printf("%d\n",q);
   }
      return 0;
}
