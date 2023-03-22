#define NUM_ITER 812769

#include <header.h>

int main_bench(){
	char s[200],a[100],b[100],w[100][20];
	int len;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(s);
	int i,j,n=0,k=0;              
	for(i=0;i<=len;i++){
		if(s[i]==32){
			w[n][k]='\0';
			n++;
			k=0;
		}
		else{
			w[n][k]=s[i];
			k++;
		}
	}
	for(j=0;j<=n;j++){
		if(strcmp(w[j],a)==0){
			strcpy(w[j],b);
		}
		if(j==0){
		    my_printf("%s",w[j]);
		}
		else{
			my_printf(" %s",w[j]);
		}
	}
	return 0;
}