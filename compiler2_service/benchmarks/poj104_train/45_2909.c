#define NUM_ITER 1209612

#include <header.h>

int main_bench()
{
    int i,j,k;
    char a[55],b[55],c[55];
    my_scanf("%s %s",a,b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==a[0])
        {
            k=0;
            for(j=i;j<i+strlen(a);j++)
            {
                c[k]=b[j];
                k++;
            }
            c[k]='\0';
            if(strcmp(a,c)==0)
            {
                my_printf("%d",i);return 0;
            }
        }
    }
}