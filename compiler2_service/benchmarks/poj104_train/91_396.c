#define NUM_ITER 1319114

#include <header.h>

main_bench()
{
      char a[150],b[150];
      gets(a);
      int i,len=strlen(a);
      for(i=0;i<len;i++)
      b[i]=a[i]+a[i+1];
      b[len-1]=a[0]+a[len-1];
      b[len]='\0';
      puts(b);
}