#define NUM_ITER 1083590

#include <header.h>

int main_bench()
{
int a,b,c,d,e=1,m,n,i,j,t[300]={0};
char s[1505],f[5],g,h;
gets(s);
b=0;d=0;c=strlen(s);
for(i=0;i<=c;i++)
if(s[i]==','||s[i]=='\0')
{
d++;
b++;
}
else
{
t[d]=t[d]*10+s[i]-'0';
}
if(d==1)
my_printf("No");
else
{
j=t[0];
for(a=1;a<d;a++)
if(t[a]>=j)
{j=t[a];e++;}
if(e==d)my_printf("No");
else
{
m=0;
for(a=0;a<d;a++)
{
if(t[a]>m&&t[a]<j)m=t[a];
}
my_printf("%d",m);
}
}
}