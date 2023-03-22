#define NUM_ITER 1567829

#include <header.h>

int main_bench()
{ int num[400];
  int i,n,j,t;
  char c;
   for(i=0;;i++)
  { my_scanf("%d%c",&num[i],&c);
    if(c!=',') break;
  }
  n=i+1;
  for(i=0;i<n;i++)
   for(j=0;j<n-i-1;j++)
  {   if(num[j]<num[j+1]) 
     {  t=num[j];
        num[j]=num[j+1];
        num[j+1]=t;
     }
   }
  for(i=0;i<n;i++)
    if(num[i]<num[0]) {my_printf("%d",num[i]);
	
 break;
}
	if(i==n) my_printf("No");
return 0;
}
