#define NUM_ITER 879260

#include <header.h>

int main_bench() 
{
    double n,c=0;
    int i,j=0,zs;
    char s1[501],s2[501];
    my_scanf("%lf",&n);
    my_scanf("%s%s",s1,s2);
if(strlen(s1)!=strlen(s2))
{
    my_printf("error");
}else{
      zs=strlen(s1);
      for(i=0;i<zs;i++)
      {
          if(s1[i]=='G'||s1[i]=='A'||s1[i]=='C'||s1[i]=='T')
          {
                 j++;
          }
      }
      
      if(j!=zs)
      {
                 my_printf("error");
                 return 0;
      }else{
         for(i=0;i<zs;i++)
         { 
                     if(s1[i]-s2[i]==0)
                     {
                                     c=c+1;
                     }
         }
         if(c/zs>n)
         {
                     my_printf("yes");
         }else{
                     my_printf("no");
         }
      }
}
  return 0;
}