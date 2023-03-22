#define NUM_ITER 790245

#include <header.h>

int main_bench(){
	char sz[100],zfc[20][20],a[20],b[20];
	gets(sz);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int i,j=0,k=0;
	for(i=0;i<=strlen(sz);i++){
		if(sz[i]!='\0'&&sz[i]!=' '){
		  zfc[j][k]=sz[i];
		  k++;
		}
		if(sz[i]=='\0'||sz[i]==' '){
		 zfc[j][k]='\0';
		 j++;
		 k=0;
		}
	}
    for(i=0;i<=j;i++){
		if(strcmp(zfc[i],a)==0){
		strcpy(zfc[i],b);
		}
	}
	my_printf("%s",zfc[0]);
	for(i=1;i<j;i++){
	my_printf(" %s",zfc[i]);
	}
	return 0;
}