#define NUM_ITER 126627

#include <header.h>

int main_bench()
{
int lim=0,i,j,a[301]={0},d=0;
a[0]=0;
char ch;
do{
	lim=lim+1;
	my_scanf("%d",&a[lim]);
	ch=getchar();
}while(ch!='\n');

for (i=1;i<lim;i++)
	{
	for (j=lim;j>i;j--)
		{
	if (a[j]>a[j-1]) {a[j]=a[j]+a[j-1];a[j-1]=a[j]-a[j-1];a[j]=a[j]-a[j-1];}
		}
	}
if (lim==1) my_printf ("No");
else
{
for (i=2;i<=lim;i++)
{
if (a[i]!=a[1]) {my_printf ("%d",a[i]);goto cobra_loop;}
}
my_printf ("No");
cobra_loop:
return 0;
}
}