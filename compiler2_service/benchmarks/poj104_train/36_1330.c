#define NUM_ITER 630261

#include <header.h>

int main_bench()
{
    int i,j;
    char a[10000],b[10000];
    my_scanf("%s%s",a,b);
    if(strlen(a)==strlen(b))
    {
        for(i=0;i<strlen(a)-1;i++)
        {
            for(j=0;j<strlen(a)-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    char s;
                    s=a[j+1];
                    a[j+1]=a[j];
                    a[j]=s;
                }
            }
        }
        for(i=0;i<strlen(b)-1;i++)
        {
            for(j=0;j<strlen(b)-i-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    char s;
                    s=b[j+1];
                    b[j+1]=b[j];
                    b[j]=s;
                }
            }
        }
    }   
    if(strcmp(a,b)==0)
        my_printf("YES");
    else
        my_printf("NO");
  
    return 0;
}