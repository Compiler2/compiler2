#define NUM_ITER 31424

#include <header.h>

int main_bench()
{
    int n,i,j,l;
    char s[20];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         memset(s,0,sizeof(s));
         my_scanf("%s",s);
         l=strlen(s);
         if(s[l-1]=='r') {for(j=0;j<l-2;j++) my_printf("%c",s[j]);my_printf("\n");}
         if(s[l-1]=='y') {for(j=0;j<l-2;j++) my_printf("%c",s[j]);my_printf("\n");} 
         if(s[l-1]=='g') {for(j=0;j<l-3;j++) my_printf("%c",s[j]);my_printf("\n");}         
    }
    }
