#define NUM_ITER 25840

#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      for(int j=0;j<n;j++)
      {
              char a[500],b[500];
              my_scanf("%s",a);
              int len=strlen(a);
              for(int i=0;i<len;i++)
              {
                      if(a[i]=='A') b[i]='T';
                      if(a[i]=='T') b[i]='A';
                      if(a[i]=='G') b[i]='C';
                      if(a[i]=='C') b[i]='G';
              }
              b[len]='\0';
              my_printf("%s\n",b);
      }
}