#define NUM_ITER 867849

#include <header.h>

int main_bench()
{
  int sum=0,len1,len2,i,n,p=0;
  double x,y;
  char a1[501],a2[501];
  my_scanf("%lf",&x);
  my_scanf("%s %s",a1,a2);
  len1=strlen(a1);
  len2=strlen(a2);
  if(len1!=len2)
  {
    p=1;
  }
  else
  {
    for(i=0;i<len1;i++)
    {
      if((a1[i]!='A'&&a1[i]!='T'&&a1[i]!='C'&&a1[i]!='G')||
         (a2[i]!='A'&&a2[i]!='T'&&a2[i]!='C'&&a2[i]!='G'))
      {
          p=1;
      }
    }
  }
  if(p!=0)
  {
    my_printf("error");
  }
  else
  {
    for(i=0;i<len1;i++)
    {
      if(a1[i]==a2[i])
      sum++;
    }
    y=1.0*sum/len1;
    if(y<=x)
    {
      my_printf("no");
    }
    else
    {
      my_printf("yes");
    }
  }
  return 0;
}
