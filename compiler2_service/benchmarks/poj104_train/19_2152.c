#define NUM_ITER 795789

#include <header.h>

int main_bench()
{
	char zong[2000];
	char x[200],y[200],words[200][20];
	int i,j=0,p=0,len;
	gets(zong);
	my_scanf("%s %s",x,y);
	len=strlen(zong);
	for(i=0;i<len;i++){
		if(zong[i]!=' '){
			words[j][p]=zong[i];
			p++;
		}else{
			words[j][p]=0;
			j++;
			p=0;
		}
	}
	words[j][p]=0;
	for(i=0;i<j;i++){
		if(strcmp(words[i],x)==0) {
			my_printf("%s ",y);
		}else {
			my_printf("%s ",words[i]);
		}
	}
	if(strcmp(words[j],x)==0) {
			my_printf("%s\n",y);
	}else {
			my_printf("%s\n",words[i]);
	}
	return 0;

		
}