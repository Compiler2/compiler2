#include <header.h>

int main_bench()
{
 int m, n;

 int temp, p, q, c, w=0;
 my_scanf("%d %d", &m, &n);
 
 
 
 
 
 
 for(;m<=n;m++)
 {
  temp=m;
  q=0;  
  while(temp>0)
	  {
	   p=temp%10;
	   q=q*10+p;
	   temp=temp/10;
	  }
	  if(q==m)
	  {
	
	   for(c=2;c<m;c++)
	   {
		   if(m%c==0)
	        break;   
	   }
	   if(c>=m)
	   {
		   w++;
		   if(w==1)my_printf("%d", m);
		   else my_printf(",%d", m);
	   }    
	  }
 }
 if(w==0)  my_printf("no");
 my_printf("\n");
 return 0;
}