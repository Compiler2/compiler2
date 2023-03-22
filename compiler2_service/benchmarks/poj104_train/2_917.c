#define NUM_ITER 18181

#include <header.h>

int main_bench()
{struct book
{int m;
char au[26];}b[999];
int m,n[26],M=0,i,j;
my_scanf("%d",&m);
for(i=0;i<26;i++)
n[i]=0;
for(i=0;i<m;i++)
my_scanf("%d %s",&b[i].m,b[i].au);
for(i=0;i<m;i++)
for(j=0;b[i].au[j]!='\0';j++)
n[b[i].au[j]-65]++;
for(i=1;i<26;i++)
if(n[M]<n[i]) M=i;
my_printf("%c\n%d",M+65,n[M]);
for(i=0;i<m;i++)
for(j=0;b[i].au[j]!='\0';j++)
if(b[i].au[j]==M+65) my_printf("\n%d",b[i].m);
return 0;}
