#define NUM_ITER 1495

#include <header.h>

int a,b,c[20],d[20],s[20],l,i,j;
void shuru()
{
  my_scanf("%d%d",&a,&b);
  for(i=0;i<a;i++)
  my_scanf("%d",&c[i]);
  for(i=0;i<b;i++)
  my_scanf("%d",&d[i]);

}
int shuchu(int s[])
{
  for(i=0;i<a+b-1;i++)
  my_printf("%d ",s[i]);
  my_printf("%d",s[a+b-1]);
return 0;
}
int paixu (int f[],int k)
 {

 for(i=1;i<k;i++)
 for(j=0;j<k-i;j++)
   if(f[j]>=f[j+1])
   {l=f[j];
   f[j]=f[j+1];
   f[j+1]=l;
   }
 return 0;
 }
 int hebing(int c[],int d[])
{ for(i=0;i<a;i++)
   s[i]=c[i];
 for(i=a;i<b+a;i++)
   s[i]=d[i-a];
  return 0;   }
   int main_bench()
   {
   shuru();
   paixu(c,a);
    paixu(d,b);
   hebing(c,d);
   shuchu(s);
   }
