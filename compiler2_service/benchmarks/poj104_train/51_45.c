#define NUM_ITER 877856

#include <header.h>

int main_bench()
{
	int n,c[500]={0},max=0,i,j;
my_scanf("%d\n",&n);
char a[510];
gets(a);
int la=strlen(a);
char b[500][5];
for(i=0;i<=la-n;i++)
{
	for(j=0;j<n;j++)
	{
		b[i][j]=a[i+j];
	}
	b[i][n]='\0';
}
for(i=0;i<=la-n;i++)
{
for(j=i;j<=la-n;j++)
{
	if(strcmp(b[i],b[j])==0)
		c[i]++;
}
if(c[i]>max)
max=c[i];
}
if(max==1)
my_printf("NO");
else
{
my_printf("%d\n",max);
for(i=0;i<=la-n;i++)
{
	if(c[i]==max)
		puts(b[i]);

}

}
return 0;
}
