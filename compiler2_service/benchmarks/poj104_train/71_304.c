#include <header.h>

main_bench()
{
	int i,n,j,a[200],b[200],c[200],k,l,z;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		l=0;
		k=0;
		my_scanf("%d%d%d",&a[i],&b[i],&c[i]);
		if(a[i]%4==0)
			k=1;
		if(a[i]%400!=0&&a[i]%100==0)
			k=0;
		if(c[i]<b[i])
		{
			z=b[i];
			b[i]=c[i];
			c[i]=z;
		}
		for(j=b[i];j<c[i];j++)
		{
			if(j==1) l=l+31;
			if(j==2) l=l+28+k;
			if(j==3) l=l+31;
			if(j==4) l=l+30;
			if(j==5) l=l+31;
			if(j==6) l=l+30;
			if(j==7) l=l+31;
			if(j==8) l=l+31;
			if(j==9) l=l+30;
			if(j==10) l=l+31;
			if(j==11) l=l+30;
		}
		if(l%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}
}