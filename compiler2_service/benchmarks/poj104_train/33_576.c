#define NUM_ITER 17426

#include <header.h>

int main_bench(){
	char s[300];
	int n;
    my_scanf("%d",&n);
	for(int i=0;i<n;i++){
	    my_scanf("%s",s);
		for(int m=0;m<strlen(s);m++){
			if(s[m]=='A'){s[m]='T';}
            else if(s[m]=='T'){s[m]='A';}
            else if(s[m]=='C'){s[m]='G';}
            else if(s[m]=='G'){s[m]='C';}
		}
        puts(s);
	}
	return 0;
}