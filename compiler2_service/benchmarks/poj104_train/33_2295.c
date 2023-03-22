#include <header.h>

int main_bench(){
	int n,i;
	char base[256];
	my_scanf("%d",&n);
	while(n!=0){
		my_scanf("%s",base);
		for(i=0;base[i]!='\0';i++){
			if(base[i]=='A')base[i]='T';
			else if(base[i]=='T')base[i]='A';
			else if(base[i]=='C')base[i]='G';
			else if(base[i]=='G')base[i]='C';
		}
		n--;
		my_printf("%s\n",base);
	}
	return 0;
}