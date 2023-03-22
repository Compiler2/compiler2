#define NUM_ITER 1454

#include <header.h>

int main_bench()
{int n,i,l,al,bl;
char a[101],b[101];
my_scanf("%d",&n);
l=n;
while(l>0)
{my_scanf("%s",&a);
 my_scanf("%s",&b);
 al=strlen(a);
 bl=strlen(b);
 for(i=100;i>=101-al;i--)
	 a[i]=a[i-101+al]-48;
 for(i=100;i>=101-bl;i--)
	 b[i]=b[i-101+bl]-48;
 for(i=0;i<=100-al;i++)
	 a[i]=0;
 for(i=0;i<=100-bl;i++)
	 b[i]=0;
 for(i=100;i>=101-al;i--)
	{a[i]=a[i]-b[i];
		if(a[i]<0)
		{a[i]=a[i]+10;
		 a[i-1]=a[i-1]-1;
		}
	}
 if(a[101-al]!=0)
	 my_printf("%d",a[101-al]);
 for(i=102-al;i<=100;i++)
 my_printf("%d",a[i]);
 my_printf("\n");
 l--;
}
}