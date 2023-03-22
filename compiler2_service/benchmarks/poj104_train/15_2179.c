#define NUM_ITER 682

#include <header.h>

int main_bench()
{
int x,y,z,w;
int n,i,j,t,s,tz=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
     {my_scanf("%d",&t);
             if(t==0&&tz==0) {tz++;x=i;y=j;}
         if (t==0){z=i;w=j;}
     }  
                           my_printf("%d",(z-x-1)*(w-y-1));                       
}