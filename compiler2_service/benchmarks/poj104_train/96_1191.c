#define NUM_ITER 1088879

#include <header.h>

int main_bench()
{
    char a[200],b[200]={0};
    my_scanf("%s",a);
    int len=strlen(a);
    int c=(a[0]-'0')*10+(a[1]-'0'),d=0;
    if(len==2&&c<13)
    {
    my_printf("0\n");
    my_printf("%s\n",a);
    }
    else
    {
    for(int i=2;i<len+1;i++)
    {
     b[i-2]=c/13+'0';
     d=c%13;
     c=d*10+a[i]-'0';
    }
    if(len==1)
    {
    my_printf("0\n");
    my_printf("%s\n",a);
    }
    else if((b[0]-'0')!=0)
    {
    my_printf("%s\n",b);
    my_printf("%d\n",d);
    }
    else
    {
    for(int i=1;i<strlen(b);i++)
    my_printf("%c",b[i]);
    my_printf("\n");
    my_printf("%d\n",d);
    }
    }
}