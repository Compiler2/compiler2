#include <header.h>

int main_bench()
{
   int n,a,b,p=0,q=0;
   my_scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
           my_scanf("%d%d",&a,&b);
           if(a-b==1) p++;
           if(a-b==-2) p++;
           if(a-b==-1) q++;
           if(a-b==2) q++;
   }
   if(q>p) my_printf("A");
   if(q<p) my_printf("B");
   if(p==q) my_printf("Tie");   
        return 0;
}