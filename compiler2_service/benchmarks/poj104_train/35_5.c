#define NUM_ITER 343

#include <header.h>

int main_bench()
{
	int n[100][100],s[100][100]={0},a,b,i,j,max,min,e=0;
my_scanf("%d,%d",&a,&b);
for(i=0;i<a;i++)
	for(j=0;j<b;j++)
		my_scanf("%d",&n[i][j]);
for(i=0;i<a;i++)
	{
	max=n[i][0];
	for(j=1;j<b;j++)
		if(n[i][j]>max) max=n[i][j];
	for(j=0;j<b;j++)
		if(n[i][j]==max) s[i][j]++;
	}
for(j=0;j<b;j++)
	{
	min=n[0][j];
	for(i=1;i<a;i++)
		if(n[i][j]<min) min=n[i][j];
	for(i=0;i<a;i++)
		if(n[i][j]==min) s[i][j]++;
	}
for(i=0;i<a;i++)
	for(j=0;j<b;j++)
		if(s[i][j]==2) {my_printf("%d+%d\n",i,j);e++;}
if (e==0) my_printf("No");
}