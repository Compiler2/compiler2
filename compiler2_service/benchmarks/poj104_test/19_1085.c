#define NUM_ITER 706483

#include <header.h>

int main_bench()
{
char s[100],a[100],b[100],r[50][20]={0},t[100];
int i=0,j,c=0,l;
gets(s);
gets(a);
gets(b);
l=strlen(s);
while(i<=l-1)
{j=0;
c++;
while(s[i]!=' '&&i<=l-1)
{r[c][j]=s[i];
j++;
i++;}
i++;}
for(i=1;i<=c-1;i++)
{if(strcmp(r[i],a)==0)
{my_printf("%s ",b);}
else 
{my_printf("%s ",r[i]);}}
if(strcmp(r[c],a)==0)
{my_printf("%s",b);}
else 
{my_printf("%s",r[c]);}
return 0;
}