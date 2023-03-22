#define NUM_ITER 1215476

#include <header.h>

int main_bench()
{
    char s[100];
    my_scanf("%s",s);
    int a[100];
    int b[100];
    int i,c;
    c=strlen(s);
    for(i=0;i<c;i++)
    {a[i]=s[i]-'0';b[i]=0;}
    for(i=0;i<c-1;i++)
    {b[i]=(a[i]*10+a[i+1])/13;
     a[i+1]=(a[i]*10+a[i+1])%13;}
     if(b[0]!=0)
     for(i=0;i<c-1;i++)
     my_printf("%d",b[i]);
     else  
     if(b[0]==0&&b[1]==0)
     my_printf("0");
     else
     for(i=1;i<c-1;i++)
     my_printf("%d",b[i]);
     my_printf("\n%d",a[c-1]);
     return 0;
     }
        
    