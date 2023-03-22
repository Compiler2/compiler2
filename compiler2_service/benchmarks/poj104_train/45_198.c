#define NUM_ITER 1204405

#include <header.h>

int main_bench()
{
	char s[50];char w[50];
	my_scanf("%s",s);
	my_scanf("%s",w);
	int lens;int j,i,t;
	lens=strlen(s);
	for(j=0;s[0]!=w[j]&&j<lens;j++);
    for(i=0,t=j;s[i]==w[t]&&i<lens&&t<50;i++,t++);
	if(i==lens)my_printf("%d\n",j);
}
