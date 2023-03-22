#include <header.h>

int main_bench(){
	int i,k,j,p=0;
	char zfc[101];
	gets(zfc);
	k=strlen(zfc);
	for(i=0;i<k;i++){
		if((zfc[i]==' ')&&(zfc[i+1]==' ')){
			for(j=i;j<k-1;j++){
				zfc[j]=zfc[j+1];
			}
			i--;
			p++;
		}
	}
	zfc[k-p]=0;

	my_printf("%s",zfc);
	return 0;
}
