#include <header.h>

int main_bench (){
	char s[260],t[260]={0};
	int  n, i,j,len;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		for (j=0;s[j]!='\0';j++){
			if (s[j]=='A'){
				t[j]='T';}
			if(s[j]=='T'){
				t[j]='A';}
			if(s[j]=='C'){
				t[j]='G';}
			if(s[j]=='G'){
				t[j]='C';}
		}
		if(s[j]=='\0'){
			t[j]='\0';}
		my_printf ("%s\n",t);
	}

	return 0;
}

