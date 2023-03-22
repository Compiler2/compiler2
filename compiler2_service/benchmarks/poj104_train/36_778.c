#define NUM_ITER 766328

#include <header.h>


int main_bench()
{
	char a[100],b[100];
	int d[255]={0},c[255]={0},i,lena,lenb;
	my_scanf("%s %s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	for (i=0;i<lena;i++)
		c[a[i]]++;
	for (i=0;i<lenb;i++)
		d[b[i]]++;
	for (i=65;i<=122;i++)
		if (d[i]!=c[i])
		{
			my_printf("NO");
			return 0;
		}
	my_printf("YES");
	return 0;
}