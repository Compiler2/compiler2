#define NUM_ITER 20069

#include <header.h>

int main_bench()
{
int t, j, k, i, num[200]={0};
char a[1000], s[1000];
my_scanf("%d", &t);
for(i=0;i<t;i++)
{
my_scanf("%s", a);
int len=strlen(a);
for(j=0;j<len;j++)
{
num[a[j]]++;
}
for(j=0;j<len;j++)
{
if(num[a[j]]==1)
{
my_printf("%c", a[j]);
break;
}
}
 if(j==len)
{
my_printf("no");
}

my_printf("\n");
memset(num,0,sizeof(num));
}
return 0;
}