#define NUM_ITER 1188143

#include <header.h>

int main_bench()
{
  char a[500];
  int i,j,h,l,b[500],k;
  gets(a);
  l=strlen(a)-1;
  for(i=0;i<=l-1;i++)
       b[i]=0;
  for(i=0;i<=l-1;i++)
    {
       k=0;
       while(a[i-k]==a[i+1+k])
          {
              k++;
              if((i-k<0)||(i+k>l)) break;
           }
       b[i]=k;
     }
  for(j=1;j<=l/2+1;j++)
    for(i=1;i<=l-2;i++)
      if(b[i]>=j)
        {
           for(h=i-j+1;h<=i+j;h++)
            my_printf("%c",a[h]);
           my_printf("\n");
        } 
}