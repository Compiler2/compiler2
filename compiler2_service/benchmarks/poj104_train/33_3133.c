#include <header.h>

int main_bench(){
	int n,i,j,k;
	char a[1000][256],b[1000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		k=strlen(a[i]);
		for(j=0;j<k;j++){
			if(a[i][j]=='A'){
				b[i][j]='T';
			}else{
				if(a[i][j]=='T'){
					b[i][j]='A';
				}else{
					if(a[i][j]=='C'){
						b[i][j]='G';
					}
					else{
						b[i][j]='C';
					}
				}
			}
		}
		b[i][k]='\0';
	}
	for(i=0;i<n;i++){
		my_printf("%s\n",b[i]);
	}
	return 0;
}
