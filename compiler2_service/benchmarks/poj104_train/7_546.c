#define NUM_ITER 647741

#include <header.h>

int main_bench()
{
	int i,j,k,la,lb,f=0;
	
	char a[300],b[300],c[300],tem[300];
	gets(a);
	gets(b);
	gets(c);


	la=strlen(a);
	lb=strlen(b);

	for(i=0;i<la;i++)
	{k=0;
		for(j=i;j<lb+i;j++)
		{
			
			tem[k++]=a[j];
			if(j==lb+i-1)tem[k]=0;
		}
		if(!strcmp(tem,b)&&f==0)
		{f++;
			my_printf("%s",c);i+=lb-1;
		}
		else my_printf("%c",a[i]);
	}
}