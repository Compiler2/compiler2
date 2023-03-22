#include <header.h>

int main_bench(){
	int n,i,j;
	char s[256];
	char A,G,C,T;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		for(j=0;s[j];j++){
			switch(s[j]){
				case'A':
					s[j]='T';
					break;
				case'G':
					s[j]='C';
					break;
				case'C':
					s[j]='G';
					break;
				case'T':
					s[j]='A';
					break;
			}
		}
		my_printf("%s\n",s);
	}
	return 0;
}