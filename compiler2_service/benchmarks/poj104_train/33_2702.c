#define NUM_ITER 22576

#include <header.h>

int main_bench(){
	int n,i,j,l;
	char line[257];
	my_scanf("%d",&n);
	for(i=0;i<n-1;i++){
		my_scanf("%s",line);
		l=strlen(line);
		for(j=0;j<l;j++){
			if(line[j]=='A')
				line[j]='T';
			else if(line[j]=='T')
				line[j]='A';
			else if(line[j]=='G')
				line[j]='C';
			else if(line[j]=='C')
				line[j]='G';
		}
		my_printf("%s\n",line);
	}
	my_scanf("%s",line);
	l=strlen(line);
	for(j=0;j<l;j++){
		if(line[j]=='A')
			line[j]='T';
		else if(line[j]=='T')
			line[j]='A';
		else if(line[j]=='G')
			line[j]='C';
		else if(line[j]=='C')
			line[j]='G';
	}
	my_printf("%s",line);

	return 0;
}