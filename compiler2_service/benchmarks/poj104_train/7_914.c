#define NUM_ITER 638390

#include <header.h>

int main_bench()
{
	char s[256],sub[256],replace[256];
	gets(s);
	gets(sub);
	gets(replace);
	
	int ls=strlen(s);
	int lsub=strlen(sub);
	char sr[256];
	int i,j;
	int same;
	for(i=0;i<ls;i++){
		for(j=0;j<lsub;j++){
			sr[j]=s[i+j];
		}
		sr[j]='\0';
		same=strcmp(sr,sub);
		if(same==0){
			my_printf("%s",replace);
			i=i+lsub;
			my_printf("%s",&s[i]);
			break;
		}else{
			my_printf("%c",s[i]);
		}
	}
	return 0;
}