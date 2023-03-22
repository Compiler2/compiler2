#include <header.h>

int main_bench()
{
  int i,n,k,s,max,min;
  int a[10000],b[10000];
  double c=0;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      my_scanf("%d%d",&a[i],&b[i]);
  }
   
  
  
  for(i=1,min=a[1];i<=n;i++)
  {
      if(a[i]<=min)
      {
          min=a[i];
      }
  }
  
  max=b[1];
  for(i=1;i<=n;i++)
  {
      if(b[i]>max)
      {
          max=b[i];
      }
  }
  
for(c=min+0.5;c<=max;c=c+1.0)
{
    for(k=1,s=0;k<=n;k++)
    {
        if(c>=a[k]&&c<=b[k])
           { s=0;break;}
        else {s=1;}
    }
    if(s==1) {
        my_printf("no\n");
        return 0;
        
    }
    
}
my_printf("%d %d",min,max);
return 0;
   
}

