#define NUM_ITER 1096

#include <header.h>

int main_bench()
{
    int n,i=0,m=0;
    my_scanf("%d\n",&n);
    char z[10000][255];
   for(i=0;i<n;i++)
       {my_scanf("%s\n",z[i]);
      for(m=0;m<255;m++)
     {if(z[i][m]=='A') {z[i][m]='T';continue;}
      if(z[i][m]=='T') {z[i][m]='A';continue;}
      if(z[i][m]=='G') {z[i][m]='C';continue;}
      if(z[i][m]=='C') {z[i][m]='G';continue;}
       }
    my_printf("%s\n",z[i]);
     }
return 0;
}