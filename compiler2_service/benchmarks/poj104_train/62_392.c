#define NUM_ITER 1539935

#include <header.h>

int main_bench(){
	int i, k, j, m;
	char a[300], zm;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			m=i;
			for(j=i;a[j]!='\0';j++){
				if(a[j]!=' '){
					break;
				}
				 }
			for(k=j;a[k]!='\0';k++){
				zm=a[k];
				a[m+1]=zm;
				m++;
			}
			a[m+1]='\0';
		}
	}
	my_printf("%s", a);

	return 0;
}
	


