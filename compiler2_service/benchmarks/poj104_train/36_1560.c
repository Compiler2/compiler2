#define NUM_ITER 927310

#include <header.h>

int main_bench(){
	char s[100];
	char s1[100];
	int geshu,geshu1;
	int l,l1,i,j,pd=0;
	my_scanf("%s%s",s,s1);
	l=strlen(s);
	l1=strlen(s1);
	if(l!=l1){
		my_printf("NO");
	}
	else{
		for(i=0;i<l;i++){
			geshu=0;
			geshu1=0;
			for(j=0;j<l;j++){
				if(s[j]==s[i]){
					geshu++;
				}
				if(s1[j]==s[i]){
					geshu1++;
				}
			}
			if(geshu!=geshu1){
				pd=1;
			}
		}
		if(pd==0){
			my_printf("YES");
		}
		else{
			my_printf("NO");
		}
	}
	return 0;
}


