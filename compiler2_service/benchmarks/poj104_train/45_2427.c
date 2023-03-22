#define NUM_ITER 911733

#include <header.h>


int main_bench()
{
	int i,j,len,fail=0;
	char s[50],w[20];
	my_scanf("%s %s",s,w);
	len=strlen(s);
	i=j=0;
	while(1){
		if(w[i]!=s[0]){
			i++;
			continue;
		}
		for(j=0;j<len;j++){
			if(w[i+j]!=s[j]){
				fail=1;
				break;
			}
		}
		if(fail==1){
			i++;
			fail=0;
			continue;
		}
		else break;
	}
	my_printf("%d\n",i);
}