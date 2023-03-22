#include <header.h>

struct pp{
	int a;char b;
}st[100];

int main_bench()
{
	struct pp o;
int n,i=0,j,s,k,l;
float t;



while(1)
{
my_scanf("%d",&st[i].a);
my_scanf("%c",&st[i].b);
if(st[i].b!=',') break;i++;
}
s=i+1;

for(i=0;i<s;i++)
	for(j=0;j<s-i;j++)
		if(st[j].a<st[j+1].a)
		{
         o=st[j];st[j]=st[j+1];st[j+1]=o;
		}

		i=0;
		while(st[i].a==st[0].a) i++;

		if(s==1||i>=s) 
		  my_printf("No");
		
	
		else 
		 my_printf("%d",st[i].a);

		
}