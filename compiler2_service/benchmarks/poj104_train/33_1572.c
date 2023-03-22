#define NUM_ITER 33165

#include <header.h>

int main_bench()
{
	int n,i,j;
	char s[5000];
	my_scanf("%d", &n);
	for(i=0;i<n;i++){
		my_scanf("%s", &s);
		for(j=0;s[j];j++){
			if(s[j]=='A'){
				s[j]='T';}
			else{
				if(s[j]=='T'){
					s[j]='A';}
				else{
					if(s[j]=='C'){
						s[j]='G';}
					else{
						s[j]='C';}
				}
			}			
		}
		my_printf("%s\n", s);
	}
	return 0;
}