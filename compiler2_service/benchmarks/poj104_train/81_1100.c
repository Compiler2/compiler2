#define NUM_ITER 217299

#include <header.h>

int f(int a[5][5],int m,int n)
{
  int i,temp;
  if(n>4||m>4) return 0;
  else 
  for(i=0;i<5;i++)
  {
    temp=a[m][i];
    a[m][i]=a[n][i];
    a[n][i]=temp;
  }
  return 1;
}
 int main_bench()
 {
     int m,n,a[5][5],k,i,j;
     for(i=0;i<5;i++)
     for(j=0;j<5;j++)
     my_scanf("%d",&a[i][j]);
     my_scanf("%d%d",&m,&n);
     k=f(a,m,n);
     if(k==0)
     my_printf("error\n");
     if(k==1)
      for(i=0;i<5;i++)
       for(j=0;j<5;j++)
     {
       if(j<4)
       my_printf("%d ",a[i][j]);
       if(j==4)
       my_printf("%d\n",a[i][j]);
       }
       return 0;
 }
