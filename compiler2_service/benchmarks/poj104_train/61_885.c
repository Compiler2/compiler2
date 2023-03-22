#include <header.h>

main_bench()
{
      int n,a[1000];
      a[0]=1;a[1]=1;
      my_scanf("%d",&n);
      int s[n];
      for(int i=0;i<n;i++)
      {
          my_scanf("%d",&s[i]);
      if(s[i]==1||s[i]==2)my_printf("%d",a[1]);
       else
      {for(int j=2;j<s[i];j++)
      {a[j]=a[j-1]+a[j-2];
      if(j==s[i]-1) my_printf("%d\n",a[j]);}}
       }}

