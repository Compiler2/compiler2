#define NUM_ITER 596456

#include <header.h>

int danci(char a[],char word[][100])
{
    int blank,i=0,j=0,n=0;
    while(a[i]!='\0')
    {
                     if(a[i]!=' '){word[n][j]=a[i];j=j+1;}
                     else if(a[i+1]!=' '&&a[i+1]!='\0'){n=n+1;j=0;}
                     i=i+1;
    }
    return (n+1);
}
int main_bench()
{
    char a[100],word[100][100]={0};
    int n,i;
    gets(a);
    n=danci(a,word);
    for(i=n-1;i>0;i--)my_printf("%s ",word[i]);
    my_printf("%s",word[0]);
}