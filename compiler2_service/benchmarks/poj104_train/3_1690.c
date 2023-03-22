#include <header.h>

  int main_bench(){
   int i,j,s,m,n,k;
   m=0;
   int x[1000],a[1000],b[1000];
   my_scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
{
   my_scanf("%d",&x[i]);
}
    for(i=0;i<n-1;i++)
    { for(j=i+1;j<n;j++)
      {  s=x[i]+x[j];
         if(s==k)
        {  my_printf("yes");
        m++; 
        break;}
      }
   if(m!=0)
     break;}
    if(m==0)
    my_printf("no");
   return 0;
}