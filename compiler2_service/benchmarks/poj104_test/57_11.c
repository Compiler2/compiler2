#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
int i,k;
char a[100][100];
for(i=0;i<n;i++)
my_scanf("%s",a[i]);
int c[100];
for(i=0;i<n;i++)
c[i]=strlen(a[i]);
for(i=0;i<n;i++)
{
if(a[i][c[i]-1]=='g')
{a[i][c[i]-3]='\0';
a[i][c[i]-2]='\0';
a[i][c[i]-1]='\0';}
else
{
a[i][c[i]-2]='\0';
a[i][c[i]-1]='\0';
}
}
for(i=0;i<n;i++)
{puts(a[i]);
my_printf("\n");
}
}
