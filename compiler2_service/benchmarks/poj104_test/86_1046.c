#define NUM_ITER 1160

#include <header.h>

int main_bench() 
{ 
int n,m,a,b,i,j;

my_scanf("%d",&n);
for(i=0;i<n;i++)
{
   my_scanf("%d",&m);
   b=0;
   for(j=0;j<m;j++)
   {
      my_scanf("%d",&a);
       if(a+b<60)
       if(a+b+3<60)
        b+=3;
       else
        b=60-a;
   }
   my_printf("%d\n",60-b);
}
return 0; 
}