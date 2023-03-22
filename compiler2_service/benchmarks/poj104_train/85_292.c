#include <header.h>

int main_bench()
{
int n,i,j,p,w=0;
char a[100][100];
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{
my_scanf("%s",a[i]);
p=strlen(a[i]);w=0;
for(j=0;j<=p-1;j++)
{
if(j==0&&a[i][j]<='9'&&a[i][j]>='0'){my_printf("no");w=1;break;}
if((a[i][j]<='9'&&a[i][j]>='0')||(a[i][j]<='Z'&&a[i][j]>='A')||(a[i][j]<='z'&&a[i][j]>='a')||a[i][j]=='_')
{

}
else {my_printf("no");w=1;break;}

}
if(w!=1)my_printf("yes");
if(i!=n)my_printf("\n");
}
}