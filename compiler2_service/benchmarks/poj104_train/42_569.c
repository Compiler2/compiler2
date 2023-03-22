#include <header.h>

int main_bench()
{
      int a[1000000];
      int i,n,del,j;
int *p;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
       my_scanf("%d",&a[i]);
       }
       my_scanf("%d",&del);
      p=a;
       for(i=0;i<n;i++)
      {
                           if(a[i]==del) 
                           {
                             for(j=i;j<n;j++)   
                             a[j]=a[j+1];
                             i--;
                             n--;}
       }
      for(i=0;i<n-1;i++,p++)
      my_printf("%d ",*p);
      my_printf("%d",*p);
}
