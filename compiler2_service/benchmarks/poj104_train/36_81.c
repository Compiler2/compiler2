#define NUM_ITER 81895

#include <header.h>

void find(int a[52],char str[100])
{
	int i=0,k=0;
	for(i=0;i<52;i++)
		a[i]=0;
	for(k=0;str[k]!='\0';k++)
	{
		for(i=0;i<26;i++)
		{
		    if(str[k]=='a'+i)
			a[i]++;
		}
	}
	for(k=0;str[k]!='\0';k++)
	{
		for(i=0;i<26;i++)
		{
			if(str[k]=='A'+i)
				a[i+26]++;
		}
	}
}
int main_bench()
{
	char str1[100],str2[100];
	int a[52],b[52],i,n=0;
	my_scanf("%s %s",str1,str2);
	find(a,str1);
	find(b,str2);
	for(i=0;i<52;i++)
	{
		if(a[i]==b[i])
			n++;
	}
	if(n==52)
		my_printf("YES") ;
	else
		my_printf("NO");
}
		
			
			
		
		

		   
	

	
	
		