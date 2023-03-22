#define NUM_ITER 920265

#include <header.h>

int main_bench()
{
	char  s[256],zfc[256][256],w[256];
    my_scanf("%s",s);
	my_scanf("%s",w);
	int n=strlen(s),m=strlen(w),i=0,j=0;
	for(;i<=m-n;){
		for(j=0;j<n;j++){	
			 zfc[i][j]=w[i+j];
		}
		zfc[i][j]='\0';
		i++;
	}
	for(j=0;j<i;j++){
		if(strcmp(zfc[j],s)==0){
			my_printf("%d\n",j);
			break;}
	}
	return 0;
}
