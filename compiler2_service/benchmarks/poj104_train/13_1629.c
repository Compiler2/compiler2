#include <header.h>




int main_bench()
{
     int N,m,i,j,a[10000],t,b[10000]={0},n[10000]={0},k,p=0,x=0,q;
     
	 
    
         
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
	   for(k=0;b[k]!=0;k++)
	   {
	      x++;
		  if(x==1) my_printf("%d",b[k]);
		  else my_printf(" %d",b[k]); 
	   
	   } 
      

 
   return 0;
}
