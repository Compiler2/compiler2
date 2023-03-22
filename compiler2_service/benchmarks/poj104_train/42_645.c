#include <header.h>

int main_bench()
{
 int i,j,m=0,n,a[100000],k,*p;
 p=a;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%d",p+i);
 my_scanf("%d",&k);
 for(i=0;i<n-m;i++)
 {
  if(*(p+i)==k) 
  {for(j=i+1;j<n-m+1;j++) *(p+j-1)=*(p+j);
   m++;i--;
  }
 }
  for(i=0;i<n-m-1;i++)
  my_printf("%d ",*(p+i));
  my_printf("%d",*(p+i));
}  
