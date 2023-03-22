#define NUM_ITER 1263488

#include <header.h>

main_bench()
{
      int a=0,b=0,c,i,j,n,s=0;
      char p[100000],q[100000];
      gets(p);
      for(i=0;i<strlen(p);i++)
      {
      if(!(p[i]==' ' && p[i+1]==' '))
      {
      q[a]=p[i];
      a++;
      }
      }
      for(i=0;i<a;i++)
      my_printf("%c",q[i]);
      }
