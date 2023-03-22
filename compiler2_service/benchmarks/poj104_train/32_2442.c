#include <header.h>

int main_bench()
{
	int n,i,j,k,m,g,h,temp;
	char a[1000]={'0'},b[1000]={'0'};
	int c[1000],d[1000]={0},f[1000];
	my_scanf("%d",&n);
	while(n>0)
	{
	    memset(a,'0',sizeof(a));
        memset(b,'0',sizeof(b));
        for(m=0;m<1000;m++)
		    {
		        f[m]=0;
		        c[m]=0;
		        d[m]=0;
		    }
		my_scanf("%s",a);
		my_scanf("%s",b);
	    j=strlen(a);
		k=strlen(b);
		for(m=0;m<j;m++)
			c[m]=a[m]-'0';
		for(m=0;m<k;m++)
			d[m+j-k]=b[m]-'0';
        for(m=j-1;m>=0;m--)
			if(c[m]>=d[m])
				f[m]=c[m]-d[m];
			else
			{
				c[m]+=10;
				c[m-1]-=1;
                f[m]=c[m]-d[m];
			}
		for(m=0;m<j;m++)
		{
			if(f[m]!=0)
			{
			    g=m;
			    break;
			}

		}
		for(m=g;m<j-1;m++)
			my_printf("%d",f[m]);
		my_printf("%d\n",f[j-1]);
        n--;
	}

	return 0;

}


