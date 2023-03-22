#include <header.h>

int main_bench()
{   
	int sz[1000];
	int i,n,m,a,j,b,c,d,e,k;
	my_scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
	{
		my_scanf("%d", &(sz[i]));
	}
b=0;
   for(i=0; i<n; i++)
   {     
	   for(k=0; k<n; k++)
	   {
		   a=sz[k]+sz[i];
	        if(a==m)
                 b=b+1;
           }
   }
  if (b>0)
  my_printf("yes");
  else if (b==0)
	  my_printf("no");
	return 0;
}