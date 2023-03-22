#include <header.h>


int main_bench()
{
    int n,b[500]={0},i,j,k,max=0;
    char a[500];
    my_scanf("%d",&n);
    a[0]=getchar();
    gets(a);
    for(k=0;k<500;k++)
      if(a[k]!='\0')
      for(j=k+1;j<500;j++)
        if(a[j]!='\0')
        {
          for(i=0;i<n;i++)
            if(a[k+i]!=a[j+i]) break;
          if(i==n) b[k]++;
        }
        else break;
      else break;
    for(i=0;i<500;i++)
      if(b[i]>max) max=b[i];
    if(max!=0)
    {
    my_printf("%d\n",max+1);
    for(i=0;i<500;i++)
      if(b[i]==max)
      {
      for(j=0;j<n;j++)
        my_printf("%c",a[i+j]);
      my_printf("\n");
      }
    }
    else my_printf("NO\n");
    
    return 0;
}
    
