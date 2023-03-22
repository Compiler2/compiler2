#define NUM_ITER 1035045

#include <header.h>

int main_bench()
{
	char a[1000]={0},b[200][50];
	gets(a);
	int j=0,i=0,k=0,max=0,min=100,x,y,n;
	n=strlen(a);
	for(k=0;k<n;k++)
	{
		while(a[k]!=' '&&a[k]!=','&&a[k]!=0)
		{
			b[i][j++]=a[k++];
		}
	
		if(j!=0)
		{
			if(j>max){max=j;x=i;}
			if(j<min){min=j;y=i;}
			j=0;i++;
		}
	}
	my_printf("%s\n%s",b[x],b[y]);
	return 0;
}
