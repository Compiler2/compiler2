#include <header.h>

void px(int a[],int n)
{int i,j,k,t;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{if(a[i]<a[j])
{t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
int main_bench()
{int m,n,i,j,k=0,l,s=0,t=0,a[300],b[300],f=0;
	for(i=0;;i++)
	{my_scanf("%d",&a[i]);
	if(getchar()!=',')break;
	}
	px(a,i+1);
	for(j=1;j<=i;j++)
		if(a[j]<a[0])
		{my_printf("%d",a[j]);f=1;break;}
		if(f==0)
		my_printf("No");
}