#define NUM_ITER 6193

#include <header.h>

main_bench()
{
	int i,n,k,m,m1;
	int a[100],b[100]={0},c[100];
	char str1[100],str2[100];
	my_scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	{
		my_scanf("%s%s",str1,str2);
	    for(i=0;str1[i]!='\0';i++);
		m=i;
        for(i=1;i<=m;i++) 
			a[i]=str1[m-i]-48;
		for(i=0;str2[i]!='\0';i++);
		m1=i;
		for(i=1;i<=m1;i++) 
			b[i]=str2[m1-i]-48;
		for(i=1;i<=m;i++)
		{
			if(a[i]<b[i]) c[i]=a[i]-b[i]+10,a[i+1]=a[i+1]-1;
			else c[i]=a[i]-b[i];
		}
		
		if(c[m]==0) for(i=m-1;i>0;i--) my_printf("%d",c[i]);
		else for(i=m;i>0;i--) my_printf("%d",c[i]);
		my_printf("\n");
		for(i=1;i<=100;i++) b[i]=0;
	}

}