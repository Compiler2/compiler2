#define NUM_ITER 1149224

#include <header.h>

int main_bench()
{
    char a[110];
    int b[110];
    char c[110];
    int i,l,s,y;
    my_scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
        b[i]=a[i]-'0';
    if(l==1)
    {
        my_printf("0\n");
        my_printf("%d\n",b[0]);
        return (0);
    }
    if(l==2&&b[0]==1&&b[1]<=2)
    {
        my_printf("0\n");
        my_printf("%d%d\n",b[0],b[1]);
        return (0);
    }
    else
    {
        if(b[0]==1&&b[1]<=2)
        {
            s=b[0]*100+b[1]*10+b[2];
            c[0]=s/13+'0';
            y=s%13;
            for(i=3;i<l;i++)
            {
                s=y*10+b[i];
                c[i-2]=s/13+'0';
                y=s%13;
            }
            c[l-2]='\0';
            my_printf("%s\n",c);
            my_printf("%d\n",y);
        } 
        else
        {
            s=b[0]*10+b[1];
            c[0]=s/13+'0';
            y=s%13;
            for(i=2;i<l;i++)
            {
                s=y*10+b[i];
                c[i-1]=s/13+'0';
                y=s%13;
            }
            c[l-1]='\0';
            my_printf("%s\n",c);
            my_printf("%d\n",y);
        }
    }
}