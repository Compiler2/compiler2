#define NUM_ITER 28552

#include <header.h>

int main_bench()
{
	
int i,j,k=0,l,m,n;
	
char word[40];
	
my_scanf("%d",&n);
	
my_scanf("%s",word);
	
k=k+strlen(word)+1;
	
my_printf("%s",word);
	
for(i=2;i<=n;i++)
	
{
	
	
my_scanf("%s",word);
	
	
k=k+strlen(word)+1;
	
	
if(k<=81) 
	
	
{
	
	
	
my_printf(" ");
	
	
	
my_printf("%s",word);
	
	
}
	
	
else
	
	
{
	
	
	
my_printf("\n%s",word);
	
	
   k=strlen(word)+1;
	
	
}
	
}
	
return 0;
}
