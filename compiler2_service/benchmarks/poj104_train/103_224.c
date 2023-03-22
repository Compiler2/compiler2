#define NUM_ITER 1057215

#include <header.h>


int main_bench()
{
  int i,j,n=0;
  char a[1000]={'\0'};
  gets(a);
  for(i=0;i<1000;i++)
  {
        if(a[i]=='\0')
        break;
        if(a[i]>='a'&&a[i]<='z')
        a[i]=a[i]-'a'+'A';
  }
  for(i=0;i<1000;i++)
  {
       if(a[i]=='\0')
       break;
       if(a[i]!=a[i+1])
       {
             n=0;
             for(j=i;a[j]==a[i];j--)
             n++;
             my_printf("(%c,%d)",a[i],n);
       }
  }
  return 0;
}
