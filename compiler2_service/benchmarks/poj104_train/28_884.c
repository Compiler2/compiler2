#define NUM_ITER 1133378

#include <header.h>

int main_bench(){
	char s[10000],a[300][30];
	int b[300];
	gets(s);
	int len=strlen(s);
	int i,k=0,j=0,m,n=0;
	for(i=0;i<len+1;i++){
		
		if(s[i]!=' '&&s[i]!='\0'){
		a[k][j]=s[i];
		j++;
	}
		if(s[i]==' '||s[i]=='\0'){
			a[k][j]='\0';
			k++;
			j=0;
		}
	}
	

	for(m=0;m<k-1;m++){
		b[n]=strlen(a[m]);
		if(b[n]!=0){
		my_printf("%d,",b[n]);
		}
		n++;
	}
	b[k-1]=strlen(a[k-1]);
		my_printf("%d\n",b[k-1]);
		return 0;
}
