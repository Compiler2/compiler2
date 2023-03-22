#define NUM_ITER 1343521

#include <header.h>

int main_bench()
{char s[10000];
int n,i,sum,j;
gets(s);
n=strlen(s);
j=1;
for(i=0;i<n;i++)
{if(s[i]==' ') j=0;}
if(j) 
{my_printf("%d",n);}
else
{
for(sum=0,i=0;s[i]!='\0';i++)
 {if(s[i]!=' ')
{sum++;}
else if(s[i]==' '&&sum!=0)
{my_printf("%d,",sum);
sum=0;}
  }
for(sum=0,i=n-1;;i--)
{
if(s[i]==' '){break;}
else 
sum++;
}
my_printf("%d",sum);
}
}