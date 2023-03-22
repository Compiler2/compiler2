#include <header.h>

int main_bench()
{
char a[1000];
int count=1;
int j,k;
my_scanf("%s",a);
for(j=0;a[j]!='\0';j++)
{
    if(a[j]>='a'&&a[j]<='z')
    {
        a[j]=a[j]+'A'-'a';                        
    }                       
}
for(k=0;a[k]!='\0';k++)
{                                            
    if(a[k]==a[k+1])
    {
        count++;         
    }
    else
    {
        my_printf("(%c,%d)",a[k],count);
        count=1;
    }
}
return 0;
}