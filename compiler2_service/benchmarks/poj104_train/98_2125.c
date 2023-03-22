#define NUM_ITER 32544

#include <header.h>


int main_bench()
{
	char word[41],words[41];
	int n,s=0,l,i,x=90;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{	
		my_scanf("%s",word);
		l=strlen(word);		
		if (i==1) {s=l;my_printf("%s",word);continue;}
		s=s+l+1;
		if (s<=80) my_printf(" %s",word);
		else {my_printf("\n%s",word);s=l;}
		
	}
	return 0;
}