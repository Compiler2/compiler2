#define NUM_ITER 1342964

#include <header.h>

main_bench()
{
    int l,i,j,count;
    char a[100];
    gets(a);
    l=strlen(a);
    count=0;
    for(i=0;i<l-1;i++)
    {
            if(a[i]==' ')
          {
              if(a[i+1]==' ')
              {
                    for(j=i;j<l-1;j++)
                    {
                               a[j]=a[j+1];
                               }
                               count++;
                               a[l-count]='\0';
                               i=i-1;
              }
              }
    } 
       my_printf("%s",a);
       getchar();
       getchar();
}     
