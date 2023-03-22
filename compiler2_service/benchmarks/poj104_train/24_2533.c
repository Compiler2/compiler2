#include <header.h>

int main_bench()
{int i,j,b[200],max=0,min=100,I,J,n;
char a[200][200];

 my_scanf("%d",&n);
for (i=0;i<n;i++)
{
 my_scanf("%s",a[i]);
}
	
for (i=0;i<n;i++)
{
b[i]=strlen(a[i]);
}


for (i=0;i<n;i++)
{
if (max<b[i])
{max=b[i];I=i;}
if(min>b[i])
{min=b[i];J=i;}
}

my_printf("%s\n",a[I]);
my_printf("%s",a[J]);
return 0;
}
