#define NUM_ITER 29084

#include <header.h>

int main_bench()
{int x[1000];
  int y[1000];
  int i,n,s,t,j;
  char c;
for(i=0;;i++)
  { my_scanf("%d%c",&x[i],&c);
    if(c!=',') break;
  } 
 n=i+1;
for(i=0;;i++)
  { my_scanf("%d%c",&y[i],&c);
    if(c!=',') break;
  } 
  t=0;
 for(i=0;i<1000;i++)
 {   s=0;
	 for(j=0;j<n;j++)
	{   if( i>=x[j]&&i<y[j])
	    s++;
	 }
	 if(s>t) t=s;
 }
 my_printf("%d %d",n,t);

return 0;
}