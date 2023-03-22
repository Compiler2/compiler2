#include <header.h>

int main_bench()
{
 int i,j,n,a,t=0,flag,line=0;
 my_scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  flag=0;
  for(j=1;j<=n;j++)
  {
   my_scanf("%d",&a);
   if(a==0) {t++;flag=1;}
  }
  if(flag==1) line++;
 }
 my_printf("%d",(line-2)*(t-line*2)/2);
 return 0;
}
