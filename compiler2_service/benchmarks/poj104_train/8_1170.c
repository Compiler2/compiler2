#include <header.h>

int a[100],b[100];
int m,n;
void shuru(void)
{
 int i;
 my_scanf("%d %d",&m,&n);
 for(i=0;i<m;i++)
 my_scanf ("%d",&a[i]);
 for (i=0;i<n;i++)
 my_scanf("%d",&b[i]);
}
void paixu(int *p1,int *p2)
{
	int i,j;
	int temp;
	for (j=1;j<m;j++)
		for (i=0;i<m-1;i++)
			if ((*(p1+i))>(*(p1+i+1)))
			{
				temp=*(p1+i);
				*(p1+i)=*(p1+i+1);
				*(p1+i+1)=temp;
			}
	for (j=1;j<n;j++)
		for (i=0;i<n-1;i++)
			if (*(p2+i)>*(p2+i+1))
			{
				temp=*(p2+i);
				*(p2+i)=*(p2+1+i);
				*(p2+i+1)=temp;
			}
}
void hebing(void)
{
 int i;
 for (i=0;i<n;i++)
 a[m+i]=b[i];
}
void shuchu(void)
{
 int i;
 my_printf("%d",a[0]);
 for (i=1;i<m+n;i++)
 my_printf(" %d",a[i]);
}
int main_bench()
{
 shuru();
 paixu(a,b);
 hebing ();
 shuchu();
return 0;
}