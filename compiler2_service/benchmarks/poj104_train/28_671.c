#define NUM_ITER 1207941

#include <header.h>

int main_bench()
{
	int sz[600];
	char  zfc[600],words[300][100];
    gets(zfc);
	int i,n=0,k=0;
	for(i=0;zfc[i]!=0;i++){
		if(zfc[i]==' '){
		    zfc[i]='\0';
            strcpy(words[n],(zfc+k));
			n++;
			k=i+1;
		}
	}
	strcpy(words[n],(zfc+k));
	n++;
	for(i=0;i<n;i++){
		sz[i]=strlen(words[i]);
	}
	my_printf("%d",sz[0]);
	for(i=1;i<n;i++){
		if(sz[i]!=0){
			my_printf(",%d",sz[i]);
		}
	}
	return 0;
}