#include <header.h>

int main_bench()
{
    int t;
    my_scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
     char a[100000];
     my_scanf("%s",a);
     int len=strlen(a);
     int count=0,sum[100000]={0};
     for(int j=0;j<len;j++)
     {
     for(int k=0;k<len;k++)
     {
     if(a[k]==a[j])
     sum[j]++;
     }
     if(sum[j]==1)
     {
      my_printf("%c\n",a[j]);
      count++;
      break;
     }
     }
     if(count==0)
     my_printf("no\n");
    }
}