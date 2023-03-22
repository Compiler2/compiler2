#define NUM_ITER 839479

#include <header.h>

int main_bench()
{
	int al,bl,j,i,m,n=0;
	char a[255],b[255],ab[255],c=62;
	my_scanf("%s%c%s",&a,&c,&b);
	al=strlen(a);
	bl=strlen(b);
	if(al>bl)
	{
		m=bl;
		bl=al;
		al=m;
		strcpy(ab,a);
		strcpy(a,b);
		strcpy(b,ab);
	}
	for(i=al-1;i>=0;i--)
	{
		j=i-al+bl;
		b[j]+=a[i]-48;
	}
	for(i=bl-1;i>=0;i--)
	{
		if(b[i]>57)
		{
			b[i]-=10;
			if(i>0)			
				b[i-1]++;
			else
				n=1;
		}
	}
	if(n)
	{
		my_printf("1");
		my_printf("%s\n",b);
	}
	else
	{
		for(i=0;i<bl;i++)
		{
			if(b[i]!='0')
			{
				for(j=i;j<bl;j++)
					my_printf("%c",b[j]);
				break;
			}
			else
				if(i==0 && bl==1)
					my_printf("0\n");
		}
	}
	return 0;
}