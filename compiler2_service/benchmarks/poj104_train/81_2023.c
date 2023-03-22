#define NUM_ITER 230534

#include <header.h>

void trans(int (*m)[5],int p,int q)
{
 int s,i,j;
 if(p>4||q>4)
 {
  my_printf("error");
 }
 else
 {
  
  for(i=0;i<5;i++)
  {
   s=*(*(m+p)+i);
   *(*(m+p)+i)=*(*(m+q)+i);
   *(*(m+q)+i)=s;
  }
  for(i=0;i<5;i++)
  {
     for (j=0;j<4;j++)
         my_printf("%d ",*(*(m+i)+j));
     my_printf("%d\n",*(*(m+i)+4));
  }
 }
}
int main_bench()
{
 int a[5][5],i,n,j,m,(*p)[5];
 
 
 p=a;
 for(i=0;i<5;i++)
  for(j=0;j<5;j++)
   my_scanf("%d",(*(p+i)+j));

 my_scanf("%d %d",&n,&m);
 trans(p,n,m);
 return 0;
}
