#define NUM_ITER 1281377

#include <header.h>

main_bench()
{
     int n;
     char a[100000];
     gets(a);
     n=strlen(a);
     int i,k;
     for(i=0;i<n;i++)
     {
       if(a[i]!=32) my_printf("%c",a[i]);
       else {
            if(a[i-1]!=32&&a[i+1]==32) {my_printf("%c",a[i]);}
            else if(a[i-1]!=32&&a[i+1]!=32) my_printf("%c",a[i]);
            }
      }
      getchar();getchar();
}
