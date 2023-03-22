#include <header.h>

int main_bench(){
	char zfc[100][100],bth[100],th[100],s[100];
	int i,e,j=0,t=0,p;
	gets(s);
	gets(bth);
	gets(th);
	e=strlen(s);
	for(i=0;i<100;i++){
		for(p=0;p<100;p++){
			zfc[i][p]=0;
		}
	}
	for(i=0;i<e;i++){
		if(s[i]!=' '){
		   zfc[j][t]=s[i];
		   t++;
		}
		else{
			j++;
			t=0;
		}
	}
    
	for(i=0;i<j;i++){
		if(strcmp(zfc[i],bth)==0){
			my_printf("%s ",th);
		}
		else{
			my_printf("%s ",zfc[i]);
		}
	}
	if(strcmp(zfc[j],bth)==0){
		my_printf("%s",th);
	}
	else{
		my_printf("%s",zfc[j]);
	}
	return 0;
}


