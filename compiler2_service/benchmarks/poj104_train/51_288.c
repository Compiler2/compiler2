#define NUM_ITER 91678

#include <header.h>

int main_bench()
{
 char a[501],b[501][5];
 int c[501];
 int n,i,l,j,p,k;
 my_scanf("%d\n",&n);
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
  c[i]=1;
 for(i=0;i<l;i++)
 {
  for(j=0;j<n;j++)
  {
   b[i][j]=a[i+j];
  }
  b[i][j]='\0';
  for(p=0;p<i&&strcmp(b[p],b[i])!=0;p++) {}
  if(p<i) c[p]++;
 }
 k=c[0];
 for(i=0;i<l;i++)
 {
  if(c[i]>k) k=c[i];
 }
 if(k==1) my_printf("NO");
 
 else
 {my_printf("%d\n",k);
 for(i=0;i<l;i++)
 {
  if(c[i]==k)
  {my_printf("%s\n",b[i]);}
 }}
 return 0;
}