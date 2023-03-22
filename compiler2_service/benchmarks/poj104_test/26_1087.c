#define NUM_ITER 1302764

#include <header.h>

int main_bench()
{
   int i,j=0;
   char sz[101],a[101];
   gets(sz);
   int n=strlen(sz);
   for(i=0;i<n-1;i++){
    if(sz[i]==' '&&sz[i+1]==' '){continue;}else if(sz[i]!=' '||(sz[i]==' '&&sz[i+1]!=' ')){a[j]=sz[i]; j++;}}
    a[j]=sz[n-1];
   a[j+1]='\0';
    my_printf("%s",a);
return 0;
}