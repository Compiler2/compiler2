#define NUM_ITER 1213696

#include <header.h>

int main_bench()
{
char a[500];
gets(a);
int i,j,k,b,m,n;
for(j=2;j<=strlen(a);j=j+2)
   {   
   for(i=0;i<strlen(a)-j+1;i++)
     {
      b=0;
      m=i;
      n=i+j-1;
      for(;m<n;m++,n--) 
       {
        if(a[m]!=a[n]){b=1;
        break;}

       }
      if(b==0)
       {
        for(k=i;k<=i+j-1;k++)
        my_printf("%c",a[k]);
        putchar('\n');
        }
     }
   }
return 0;
}