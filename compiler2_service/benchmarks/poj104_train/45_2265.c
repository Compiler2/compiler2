#include <header.h>

int main_bench(){
	char a[50],b[50],c[50];
	int n,m,i,j,k=0;
          my_scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<m;i++){
		if(b[i]==a[0]){
			for(j=i;j<i+n;j++){
				c[k]=b[j];
				k++;
			}
			c[k]='\0';
			if(strcmp(c,a)==0){
				my_printf("%d",i);
			}
		}
	}
	return 0;
}