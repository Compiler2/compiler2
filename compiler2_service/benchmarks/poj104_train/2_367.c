#define NUM_ITER 14612

#include <header.h>


int main_bench()
{int m, i, j, b[999], n[26], t[2]={0}, x=0;
char a[999][26], au;
my_scanf("%d",&m);
for(i=0;i<m;i++)
{my_scanf("%d%s",&b[i],a[i]);}
for(i=0;i<m;i++)
{
	for(j=0;j<(int)strlen(a[i]);j++)
	{n[(int)a[i][j]-65]++;}
}
for(i=0;i<26;i++)
{
	if(t[0]<n[i])
	{t[0]=n[i],t[1]=i;}
}
au=t[1]+65;
my_printf("%c\n%d\n",au,t[0]);
for(i=0;i<m;i++)
{
	x=0,j=0;
	while(j<(int)strlen(a[i])&&x==0)
	{
		if(a[i][j]==t[1]+65)
		{my_printf("%d\n",b[i]),x++;}
		else
		{j++;}
	}
}
return 0;
}