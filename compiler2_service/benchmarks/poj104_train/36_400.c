#define NUM_ITER 938554

#include <header.h>

int main_bench() 
{ 
	int cmp(char a[],char b[],int);
	char a[100]="",b[100]="";
	my_scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))my_printf("NO\n");
	else
	{
	if(cmp(a,b,0)==1)my_printf("YES\n");
	else my_printf("NO\n");
	}
} 

int cmp(char a[],char b[],int n)
{
	if(n==strlen(a))return 1;
	else
	{
		int j;
			for(j=0;j<strlen(a);j++)if(b[j]==a[n])break;
			if(j==strlen(a))return 0;
			else{b[j]=0;return cmp(a,b,n+1);}
	}
}