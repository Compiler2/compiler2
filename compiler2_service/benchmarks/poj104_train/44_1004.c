#include <header.h>

int rev(int m)
{
char s[1050];
int k=m;
int ans=0;
int i=0;
while (k>0)
{
s[i]=k%10;
k/=10;
i++;
}
i--;
int base=1;
while (s[i]==0) i--;
for (;i>=0;i--)
{
ans+=s[i]*base;
base*=10;
}
return ans;
}
main_bench()
{
for (int kk=1;kk<=6;kk++)
{
int n,m;
my_scanf("%d",&n);
if (n<0) m=0-n; else m=n;
if (m==0) my_printf("0\n");
else 
{
m=rev(m);
if (n<0)
my_printf("-");
my_printf("%d\n",m);
}
}
}
