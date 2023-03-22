#define NUM_ITER 973215

#include <header.h>

int main_bench(){
	char s[256],ow[256],rw[256];
	my_scanf("%s%s%s",s,ow,rw);
	int lens,lenow;
    int i,j,k,l,t,flag;
	lens=strlen(s);
	lenow=strlen(ow);
	for(i=0;i<=(lens-lenow);i++){
		flag=1;
		for(j=0;j<lenow;j++){
			if(s[i+j]!=ow[j]){
				flag=0;
				break;
			}
		}
		if(flag!=0){
			t=i;
			break;
		}
	}
	if(flag==0){
		my_printf("%s",s);
	}
	else{
		for(k=0;k<t;k++){
			my_printf("%c",s[k]);
		}
		my_printf("%s",rw);
		for(l=t+lenow;l<lens;l++){
			my_printf("%c",s[l]);
		}
	}
	return 0;
}