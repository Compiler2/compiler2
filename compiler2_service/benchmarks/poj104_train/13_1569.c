#define NUM_ITER 9037

#include <header.h>




int main_bench()
{
     int N,m,i,j,a[10000],t,b[10000]={0},n[10000]={0},k,p=0,x,q;
     
	 
    
         
		 my_scanf("%d",&m);
         for(j=0;j<m;j++)
             my_scanf("%d",&a[j]);
         b[0]=a[0];
         for(j=0;j<m;j++)
		{
		  p=0;
		  for(k=0;b[k]!=0;k++)
             {
			    if(a[j]==b[k])  {n[k]++;p=1;break;}
			 
			 }
           if(p==0)  {b[k]=a[j]; n[k]++;}    
        }
	    x=0;q=0;
	if(n[0]==1) my_printf("%d",b[0]);
		       else if(n[0]>=2)  
		       {
		           my_printf("%d",b[0]);
		           n[0]=0;
			   
			   }	
              
        for(j=1;b[j]!=0;j++)
	       {
		       if(n[j]==1) my_printf(" %d",b[j]);
		       else if(n[j]>=2)  
		       {
		           my_printf(" %d",b[j]);
		           n[j]=0;
			   
			   }
			   
     
	 
	          }
      

 
   return 0;
}



