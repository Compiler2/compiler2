#define NUM_ITER 1017070

#include <header.h>

int main_bench()
{char a[100],b[100],t;
my_scanf("%s%s",a,b);
int m,n,i,j;
m=strlen(a);
n=strlen(b);
if(m!=n)
my_printf("NO");
else
{for(i=0;i<m;i++)
{for(j=i;j<m;j++)
{if(a[i]==b[j])
{t=b[i];
b[i]=b[j];
b[j]=t;
break;}
}
if(a[i]!=b[i]&&j==m)
{my_printf("NO");
break;}
}
for(i=0;i<m;i++)
{if(a[i]!=b[i])
{my_printf("NO");break;}}
if(i==m)
my_printf("YES");
}
return 0;
}