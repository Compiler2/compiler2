#define NUM_ITER 267554

#include <header.h>

main_bench()
{
      char a[101];
      char b[101];
      int i;
      int j;
      int count=1;
      int c;
      gets(a);
      c=strlen(a);
      for(i=0;i<101;i++)
      b[i]=' ';
      b[0]=a[0];
      for(i=1;i<c;i++)
      {
      if((a[i]==' ')&&(a[i-1]==' '))
      j=0; 
      else
      {
      b[count]=a[i];
      count++;
      }
      b[count]='\0';
      }
      my_printf("%s",b);
      getchar();
      getchar();
      }