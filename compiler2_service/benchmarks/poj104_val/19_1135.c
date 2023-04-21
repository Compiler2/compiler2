#define NUM_ITER 833022

#include <header.h>

int main_bench(){
    char a[100];
	char b[100];
	char c[100];
	char d[50][100];
	gets(a);
	my_scanf("%s",b);
	my_scanf("%s",c);
    
	int chang,i,n,m;
	int u=0,v=0;
	chang=strlen(a);
    
	for(i=0;i<chang;i++){
		if(a[i]!=' '){
			d[u][v]=a[i];
			v++;
		}else{
			v=0;
			u++;
		}
	}

    for(i=0;i<u;i++){
		if(strcmp(b,d[i])==0){
			my_printf("%s ",c);
		}else{
			my_printf("%s ",d[i]);
	}
		
	}


    if(strcmp(b,d[i])==0){
		my_printf("%s",c);
	}else{
		my_printf("%s",d[u]);
	}

	return 0;
}

