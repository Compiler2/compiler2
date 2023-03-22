#define NUM_ITER 1287169

#include <header.h>

int main_bench()
{
    char a[1000],b[10];
    int num[10]={1,1,1,1,1,1,1,1,1,1};
    my_scanf("%s",&a);
    int i=0;
    while (a[i]!='\0')
    {
          if (a[i]>='a' && a[i]<='z')
          a[i]=a[i]-'a'+'A';
          i++;
    }
    int j=0;
    b[j]=a[0];
    for (int i=1;i<=999;i++)
    {
        if (a[i]==a[i-1])
        num[j]++;
        else
        {
            j++;
            b[j]=a[i];
        }
        if (a[i]=='\0')
        break;
    }
    for (int i=0;i<=j-1;i++)
    my_printf("(%c,%d)",b[i],num[i]);
    my_printf("\n");

}