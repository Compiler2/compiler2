#define NUM_ITER 555411

#include <header.h>

int main_bench()
{int b[2000]={0},n,i,j,k,l,m,max,count=0;
char a[3000],c[10];
my_scanf("%d\n",&n);
gets(a);
m=strlen(a);

for(i=0;i<m-n;i++)
{
	for(j=0;j<n;j++)
{c[j]=a[i+j];}
b[i]=1;

for(k=i+1;k<m;k++)
	{for(j=0;j<n;j++)

	{if(c[j]==a[k+j]){if(j==n-1) b[i]++;}
	else break;}
	}	
}

max=0;
for(i=0;i<m;i++)
{if(b[i]>max)max=b[i];}

if(max>1)
{my_printf("%d\n",max);
for(i=0;i<m;i++)
{if(b[i]==max)
{for(j=0;j<n;j++)
my_printf("%c",a[i+j]);
my_printf("\n");
}}}
else my_printf("NO\n");



getchar();
getchar();
getchar();
}