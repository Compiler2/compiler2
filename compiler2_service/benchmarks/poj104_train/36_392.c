#define NUM_ITER 111845

#include <header.h>

int main_bench()
{
void number(char ch[100],int a[256],int b);
char ch1[100],ch2[100];
int m,n,i,t;
int a[256]={0},b[256]={0};
my_scanf("%s%s",ch1,ch2);
m=strlen(ch1);
n=strlen(ch2);
number(ch1,a,m);
number(ch2,b,n);
t=0;
for(i=0;i<=255;i++)
if(a[i]!=b[i])t=t+1;
if(t==0)my_printf("YES");
else my_printf("NO");
}
void number(char ch[100],int a[256],int b)
{
int i;
for(i=0;i<b;i++)
a[ch[i]]=a[ch[i]]+1;
}

