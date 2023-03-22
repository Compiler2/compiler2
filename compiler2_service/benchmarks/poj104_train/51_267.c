#define NUM_ITER 1084873

#include <header.h>

int main_bench()
{
    char a[501],b[500][6];
	int n,i,j,len,c[500],max;
	my_scanf("%d",&n);
    my_scanf("%s",a);
	len=strlen(a);
	for(i=0;i<=len;i++)
		c[i]=1;
    for(i=0;i<=len-n;i++)
	{
		for(j=0;j<=n-1;j++)
			b[i][j]=a[i+j];
		b[i][j]='\0';
	}
	for(i=0;i<=len-n-1;i++)
		strcpy(b[i],b[i]);
	for(i=0;i<=len-n-1;i++)
	{
		for(j=i+1;j<=len-n;j++)
		{
            if(strcmp(b[i],b[j])==0)
				c[i]++;
		}
	}
    max=c[0];
	for(i=1;i<=len-n;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	if(max==1)
		my_printf("NO");
	else
	{ 
		my_printf("%d\n",max);
		for(i=0;i<=len-n;i++)
		if(c[i]==max)
			my_printf("%s\n",b[i]);
	}

}