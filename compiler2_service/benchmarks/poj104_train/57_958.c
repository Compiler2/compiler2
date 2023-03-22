#define NUM_ITER 23571

#include <header.h>

int main_bench()
{
int n,m,i,j,k,w;

char sfc[280];
my_scanf("%d",&n);
for (i=0;i<n;i++) {

my_scanf("%s",sfc);

if((sfc[strlen(sfc)-3])=='i')sfc[strlen(sfc)-3]=0;
else sfc[strlen(sfc)-2]=0;	
	


my_printf("%s\n",sfc);
}
return 0;
}
