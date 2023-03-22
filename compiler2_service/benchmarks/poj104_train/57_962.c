#include <header.h>

int main_bench(){
	char dc[9999][33];
	int n;
	int i;
	int sz[9999];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",&dc[i]);
	}
    for(i=0;i<n;i++){
		sz[i]=strlen(dc[i]);
	}
    for(i=0;i<n;i++){
		if((dc[i][sz[i]-1]=='r')&&(dc[i][(sz[i]-2)]=='e')){
			dc[i][(sz[i]-2)]='\0';
		}else if(dc[i][sz[i]-1]=='y'&&dc[i][sz[i]-2]=='l'){
			dc[i][sz[i]-2]='\0';
		}else if(dc[i][sz[i]-1]=='g'&&dc[i][sz[i]-2]=='n'&&dc[i][sz[i]-3]=='i'){
			dc[i][sz[i]-3]='\0';
		}
		my_printf("%s\n",dc[i]);
	}


	return 0;
}



