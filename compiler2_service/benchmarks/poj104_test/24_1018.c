#define NUM_ITER 629394

#include <header.h>

int main_bench()
{

    char az[500]={0};
	char b[50][100]={0};
	gets(az);
	int n,i,j=0,k,s=0;
	n=strlen(az);


	for(i=0;j<n;i++,j++)
	{
		for(k=0;az[j]!=32&&az[j]!=0;k++,j++)
		{
			b[i][k]=az[j];
		}
	s++;
	}


	int as[100]={0};
	for(i=0;i<s;i++)
	{
		as[i]=strlen(b[i]);
	}



	int min=100,max=0,minx=0,maxx=0;
	for(i=0;i<s;i++)
	{
		if(as[i]<min)
		{
			minx=i;
			min=as[i];
		}
		if(as[i]>max)
		{
			maxx=i;
			max=as[i];
		}
	}
	my_printf("%s\n%s\n",b[maxx],b[minx]);
}
