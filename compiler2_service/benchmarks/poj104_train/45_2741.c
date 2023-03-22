#define NUM_ITER 1083269

#include <header.h>

int main_bench()
{
 	char s[50],w[50];
 	int i,k,ls,lw,a,m=0,x=0;
 	my_scanf("%s %s",s,w);
 	ls=strlen(s);
 	lw=strlen(w);
 	for(i=0;i<lw;i++){
		if(w[i]==s[0]){
			a=i;
			for(k=0;k<ls;k++){
				if(w[i+k]!=s[k]){
					m=1;
					break;
					}
				}
			if(m==0){
				x=1;
				break;
				}
			}
		}
	if(x==1) my_printf("%d",a);
 	
    return 0;
}