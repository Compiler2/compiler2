#define NUM_ITER 196378

#include <header.h>

int sushu(int k)
{  int i,t=1;
  for(i=2;i<k/2;i++)   if(k%i==0)    t=0;
 return(t);}
int hws(int m)
{   int t=m,n=0;
    while(m!=0)  {n=n*10+m%10;  m=m/10;}
    if(t==n)   return(1);  else return(0);}
int main_bench()
{
  int m,n,i,k=0,a[100];
   my_scanf("%d %d",&m,&n);
  for(i=m;i<=n;i++)     {if((sushu(i)==1)&&(hws(i)==1))    {a[k]=i;k++;}}
  if(k==0)   my_printf("no");
  else  {for(i=0;i<k;i++)  { my_printf("%d",a[i]);  if(i!=(k-1))   my_printf(",");}}
}
