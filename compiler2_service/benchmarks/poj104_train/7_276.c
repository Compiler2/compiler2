#define NUM_ITER 845833

#include <header.h>

int main_bench(){
	char s[256],zi[256],r[256];
	int lens,lenzi,lenr;
	int i,k,p=2;
	my_scanf("%s %s %s",&s,&zi,&r);
	lens=strlen(s);
	lenzi=strlen(zi);
	lenr=strlen(r);
	for(i=0;i<lens;i++){
		if(s[i]==zi[0]){
			for(k=1;k<lenzi;k++){
				if(s[i+k]==zi[k]){
					p=0;
				}else{
					break;
				}
			}
			if(p==0){
				for(k=0;k<lenzi;k++){
                    s[i+k]=r[k];
				}
				my_printf("%s",s);
				break;
			}
		}
	}
         if(p==2){
		my_printf("%s",s);
	}
	return 0;
}