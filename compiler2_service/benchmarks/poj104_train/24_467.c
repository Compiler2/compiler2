#define NUM_ITER 902394

#include <header.h>

int main_bench()
{
	char a[1000],b[50][100];
	int n,i,j,k,max=0,min;
	gets(a);
	n=strlen(a);
	min=n;
	for(i=0,k=0;i<n;i++)
	{
		if(a[i]!=' ') 
		{
			for(j=i;j<n;j++) 
			{
				if(a[j]==' ')break;
				else b[k][j-i]=a[j];
			}
			b[k++][j-i]='\0';
			i=j;
		}
		
	}
	for(i=0;i<k;i++) 
	{
		if((int)strlen(b[i])>max)max=strlen(b[i]);
		if((int)strlen(b[i])<min)min=strlen(b[i]);
	}
	for(i=0;i<k;i++) if((int)strlen(b[i])==max) {my_printf("%s\n",b[i]);break;}
	for(i=0;i<k;i++) if((int)strlen(b[i])==min) {my_printf("%s\n",b[i]);break;}
}