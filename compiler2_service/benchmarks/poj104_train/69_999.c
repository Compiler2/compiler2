#define NUM_ITER 831054

#include <header.h>

void dele0(char *a)
{	int i,j;
	for(i=0;*(a+i)=='0';i++);
	for(j=0;*(a+j+i)!=0;j++)
	{	*(a+j)=*(a+i+j);	}*(a+j)=0;
}

int main_bench()
{
	int i,a1,b1,add=0;
	char a[300],b[300],c[300];
	my_scanf("%s",a);dele0(a);
	my_scanf("%s",b);dele0(b);
	a1=strlen(a);
	b1=strlen(b);
	for(i=0;i<a1&&i<b1;i++)
	{	if(a[a1-i-1]+b[b1-i-1]-'0'-'0'+add>9){c[i]=a[a1-i-1]+b[b1-i-1]-'0'-10+add;add=1;}
		else {c[i]=a[a1-i-1]+b[b1-i-1]-'0'+add;add=0;}
	}

	if(i==a1)
	{	for(;i<b1;i++)
		{	if(b[b1-i-1]-'0'+add>9){c[i]=b[b1-i-1]-10+add;add=1;}
			else {c[i]=b[b1-i-1]+add;add=0;}
		}	
	}
	else 
	{	for(;i<a1;i++)
		{	if(a[a1-i-1]-'0'+add>9){c[i]=a[a1-i-1]-10+add;add=1;}
			else {c[i]=a[a1-i-1]+add;add=0;}
		}	
	}if(add==1)	my_printf("1");
	if(i==0)my_printf("0");
	else for(;i>0;i--)
			my_printf("%c",c[i-1]);

}