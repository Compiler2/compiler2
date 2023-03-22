#define NUM_ITER 4122

#include <header.h>

int main_bench()
{
	int n,i,j,q,k,len1[100],len2[100];
	int a[100][26]={0},b[100][26]={0};
    char s[100][101],d[100][101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%s%s",s[i],d[i]);
	for(i=0;i<n;i++)
	{
    len1[i]=strlen(s[i]);
	len2[i]=strlen(d[i]);
for(j=0;j<25;j++)
{
if(len1[i]<4) break;
		len1[i]-=4;
		for(q=0;q<4;q++)
		a[i][j]=a[i][j]*10+(s[i]+len1[i])[q]-'0';
		
	}
		for(q=0;q<len1[i];q++)
		a[i][j]=a[i][j]*10+s[i][q]-'0';
for(j=0;j<25;j++)
	{
if(len2[i]<4) break;
		len2[i]-=4;
		for(q=0;q<4;q++)
		b[i][j]=b[i][j]*10+(d[i]+len2[i])[q]-'0';
	}
		for(q=0;q<len2[i];q++)
		b[i][j]=b[i][j]*10+d[i][q]-'0';
	}
	for(i=0;i<n;i++)
	for(j=0;j<25;j++)
	{
		if(a[i][j]>=b[i][j])
			b[i][j]=a[i][j]-b[i][j];
		else
		{
			b[i][j]=a[i][j]+10000-b[i][j];
			a[i][j+1]-=1;
		}
	}
	
    for(i=0;i<n;i++)
		{
			for(j=25;j>=0;j--)
				if(b[i][j]!=0) {k=j;break;}
				my_printf("%d",b[i][k]);
        for(j=k-1;j>=0;j--)
        my_printf("%04d",b[i][j]);
		my_printf("\n");
		}
	return 0;
}