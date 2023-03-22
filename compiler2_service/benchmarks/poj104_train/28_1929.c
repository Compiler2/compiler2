#include <header.h>

int main_bench()
{
    int i,n,count=0;
    char a[301][500];
    int b[301];
    for(i=0;i<300;i++)
    {
                      my_scanf("%s",a[i]);
                      n=strlen(a[i]);
                      b[i]=n;
                      count++;
                      if(n==0)
                      break;
    }
    for(i=0;i<count-1;i++)
    {
                        if(i==0)
                        my_printf("%d",b[i]);
                        else
                        my_printf(",%d",b[i]);
    }
    return 0;
}