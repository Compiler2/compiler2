#define NUM_ITER 1172781

#include <header.h>

char swap(char str[100])
{
    int n,i,j;
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    if(str[i]==' ') break;
    for(j=i+1;j<n;j++) my_printf("%c",str[j]);
    if(i>0)
    {
    my_printf(" ");
    str[i]='\0';
    swap(str);
    }
}
int main_bench()
{
    char str[101];
    gets(str);
    swap(str);
}