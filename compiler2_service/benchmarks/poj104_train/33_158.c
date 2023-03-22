#define NUM_ITER 19962

#include <header.h>

char hb(char a){
	if(a=='A'){
		a='T';
	}else if(a=='T'){
		a='A';
	}else if(a=='C'){
		a='G';
	}else if(a=='G'){
		a='C';
	}
	return a;
}

int main_bench(){
	int n;
	my_scanf("%d",&n);
	for(int z=0;z<n;z++){
		char s[256]={'\0'};
		my_scanf("%s",s);
		int length;
		length=strlen(s);
		for(int i=0;i<length;i++){
			s[i]=hb(s[i]);
		}
		my_printf("%s\n",s);
	}
	return 0;
}
