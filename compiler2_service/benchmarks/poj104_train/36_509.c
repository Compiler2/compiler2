#define NUM_ITER 1035515

#include <header.h>

int max(char a,char b[][50],int l);
int main_bench()
{int l,i;
    char a[50],b[2][50]={'\0'};
    my_scanf("%s%s",a,b[0]);
    l=strlen(a);
    if(l!=strlen(b[0]))
    my_printf("NO");
    else
    {
        for(i=0;i<=l-1;i++)
        if(max(a[i],b,l)==0)
        break;
        
        if(i==l)
        my_printf("YES");
        else
        my_printf("NO");
}
    return 0;
}

int max(char a,char b[][50],int l)
{int i;
     for(i=0;i<=l-1;i++)
     if(a==b[0][i]&&b[1][i]=='\0')
     {b[1][i]=1;
     return 1;
     break;}
     return 0;
     }
