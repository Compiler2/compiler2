#define NUM_ITER 21949

#include <header.h>

char swap(char x){
	char y;
	if(x=='A')
		y='T';
	if(x=='T')
		y='A';
	if(x=='G')
		y='C';
	if(x=='C')
		y='G';
	return y;
}
int main_bench(){
	int n,i,j,len;
	char str[50000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++){
			str[j]=swap(str[j]);
		}
		my_printf("%s\n",str);
	}
	return 0;
}
