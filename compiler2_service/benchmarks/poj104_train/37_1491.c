#define NUM_ITER 21890

#include <header.h>

void search()
{
	char s[100];
	int i,j,k=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		k=0;
		for(j=0;j<strlen(s);j++)
		if(s[i]==s[j]) k++;
		if(k==1) break; 
		}
	if(k>1) my_printf("no\n");
		else
	my_printf("%c\n",s[i]);
	}
	
int main_bench()
	{
		int n;
		my_scanf("%d",&n);
		getchar();
		while(n>0)
		{
			search();
			n--;
			}
		return 0;		
		}