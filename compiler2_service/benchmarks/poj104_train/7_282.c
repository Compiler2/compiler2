#define NUM_ITER 915772

#include <header.h>

int main_bench(){
	char s[256],sub[256],re[256];
	int t,i,k;
	my_scanf("%s\n%s\n%s",s,sub,re);
	t=strlen(sub);
	for(i=0;i<strlen(s)-t+1;i++){
		int x=0;
		for(k=i;k<i+t;k++){
			if(s[k]!=sub[k-i]){
				x+=1;
			}
		}
		if(x==0){
			for(k=i;k<i+t;k++){
				s[k]=re[k-i];
			}
		    break;
		}
	}
	my_printf("%s",s);
	return 0;
}
