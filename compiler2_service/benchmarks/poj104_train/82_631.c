#define NUM_ITER 32571

#include <header.h>

int main_bench()
{
   int n,a[100],b[100],i,c[100],j,d,p,q;
   j=0;
   d=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    my_scanf("%d %d",&(a[i]),&(b[i]));
    if((90<=a[i])&&(a[i]<=140)&&(60<=b[i])&&(b[i])<=90)
	{
           j++;
	}
   else
  {
	 d++;
     c[d]=j;
	 j=0;
   }
  }
   
  if(j!=0)
  {  
	 d++;
	 c[d]=j;
	 int max=0;
	 for(p=1;p<=d;p++)
	 {
	 if(c[p]>max)  
	 {
		 
		 
		 
		 max=c[p];
	 }
	 }
  my_printf("%d",max);
  }
 else
 {int max=0;
     for(p=1;p<=d;p++)
	 {
	   if(c[p]>max)  
	 {
		 
		 
		 
		 max=c[p];
	 }
	 }
   my_printf("%d",max);
 }
 
 return 0;
}
 
 