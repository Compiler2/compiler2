#include <header.h>

int a[1005],b[1005];
int tm[1005];
int main_bench()
{
  int n,t=0,i,j,k=0;
  char m;
  while(1)
  {
  my_scanf("%d",&a[++t]);
  my_scanf("%c",&m);
  if(m == '\n') break;
  }
  for(i =1 ;i <= t;i++)
  {
     my_scanf("%d",&b[i]);
     my_scanf("%c",&m);
  }
  for(i = 1;i <= t;i++)
     for(j = a[i];j < b[i];j++)
        {
             tm[j]++;
             if(tm[j]>k)  k = tm[j];  
        }
  my_printf("%d %d",t,k);
 return 0;    
}