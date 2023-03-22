#define NUM_ITER 703570

#include <header.h>


int main_bench()
{
  int c[500]={0},i,j,k=0,n;
  char a[500]={'\0'};
  char b[500][5]={'\0'};
  my_scanf("%d",&n);
  getchar();
  gets(a);
  for(i=0;a[i+n-1]!='\0';i++)
  {
       for(j=0;j<n;j++)
       b[i][j]=a[i+j];
  }
  for(i=0;a[i+n-1]!='\0';i++)
  {
       for(j=i;a[j+n-1]!='\0';j++)
       {
             if(strcmp(b[i],b[j])==0)
             c[i]++;
       }
  }
  for(i=0;c[i]>0;i++)
  {
      if(c[i]>k)
      k=c[i];
  }
  if(k==1)
  my_printf("NO");
  else
  {
  my_printf("%d\n",k);
  for(i=0;a[i+n-1]!='\0';i++)
  {
       if(c[i]==k)
       my_printf("%s\n",b[i]);
  }}
  return 0;
}
