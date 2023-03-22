#define NUM_ITER 11553

#include <header.h>

int main_bench()
{
  int i,j,n,a,b,m;
  char c[100],d[100];
  my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     my_scanf("%s",c);
	 my_scanf("%s",d);
	 a=strlen(c);
	 b=strlen(d);
	 m=b-1;
	 for(j=a;j>a-b;j--)
	   {
	     
	      if(c[j-1]>=d[m])
		    {
			  c[j-1]=c[j-1]-d[m]+48;
			  m--;
			}
			else 
			{
			  c[j-1]=c[j-1]+10-d[m]+48;
			  c[j-2]--;
			  m--;
			}
	   }
	 j=0;
	 while(c[j]==0)
		 j++;
      for(;j<a;j++)
	  my_printf("%c",c[j]);
	  my_printf("\n");

  }
  
return 0;
}