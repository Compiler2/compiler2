#define NUM_ITER 837743

#include <header.h>

char a[250],b[250],sum[251];
int main_bench()
{
	int lena,lenb,i,l,f;
	my_scanf("%s %s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	if(lena>lenb) l=lena;
	else l=lenb;
	for(i=0;i<l;i++)
    	a[i]-='0',b[i]-='0';
	if(lena>lenb)
    	{  
			for(i=lena-1;i>=lena-lenb;i--)
				b[i]=b[i-lena+lenb];
			for(i=0;i<lena-lenb;i++)
				b[i]=0;
		}
	else if(lena<lenb) 
    	{ 
			for(i=lenb-1;i>=lenb-lena;i--)
				a[i]=a[i-lenb+lena];
			for(i=0;i<lenb-lena;i++)
				a[i]=0;
		}
	f=l;
	for(i=0;i<l;i++)
		sum[i+1]=a[i]+b[i];
	for(i=l;i>=0;i--)
		if(sum[i]>9)
			sum[i]-=10,sum[i-1]++;
	for(i=l;i>=0;i--)
		if(sum[i]!=0) f=i;
	for(i=f;i<=l;i++)
		my_printf("%d",sum[i]);
}