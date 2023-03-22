#include <header.h>


int main_bench()
{
    char s[20],w[50],a[50][20];
    my_scanf("%s%s",s,w);
    int l1=strlen(s),l2=strlen(w),i,j;
    for(i=0;i<=l2-l1;i++)
    {
        for(j=0;j<=l1-1;j++)
            a[i][j]=w[i+j];
        a[i][l1]='\0';
    }
    for(i=0;i<=l2-l1;i++)
    {
        if(strcmp(a[i],s)==0)
        { my_printf("%d",i);break;}
    }
   
}