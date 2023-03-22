#include <header.h>

int main_bench()
{
char a[501],c[500][6];
int n,i,k,j,m;
my_scanf("%d%s",&n,a);
k=strlen(a);
int b[500];
for(i=0;i<=k-n;i++)
{for(j=0;j<n;j++)c[i][j]=a[i+j];
c[i][n]=0;
}
for(i=0;i<k-n;i++)
{b[i]=1;
for(j=i+1;j<=k-n;j++)
{if(strcmp(c[i],c[j])==0)b[i]++;}
}
m=b[0];
for(i=1;i<k-n;i++)
{if(b[i]>m)m=b[i];}
if(m==1)my_printf("NO");
else {my_printf("%d\n",m);
for(i=0;i<k-n;i++)
{if(b[i]==m)my_printf("%s\n",c[i]);}
}
}