#define NUM_ITER 1347955

#include <header.h>

int main_bench()
{
    int i,len;
    char s[30]={'\0'};
     gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
   { if(s[i]>='0'&&s[i]<='9')
    my_printf("%d",s[i]-48);
     if((s[i]>='0'&&s[i]<='9')&&(s[i+1]=='\0'||s[i+1]<'0'||s[i+1]>'9'))
     my_printf("\n");}
     return 0;
}