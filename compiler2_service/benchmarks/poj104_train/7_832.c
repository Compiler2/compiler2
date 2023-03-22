#define NUM_ITER 925136

#include <header.h>

int main_bench()
{
	char str[256],sub[256],rep[256],sz[256];
	my_scanf("%s%s%s",str,sub,rep);
	int a,b,c,tag;
	a=strlen(sub);
	c=strlen(str);
	int i,j;
	for(i=0;str[i]!='\0';i++){
		tag=0;
		if(str[i]==sub[0]){
			for(j=0;j<a;j++){
				sz[j]=str[i+j];
			}
			sz[a]='\0';
		}
		if(strcmp(sz,sub)==0){
			b=i;
			strcpy(sub,rep);
			tag=1;
			break;
		}
	}
	if(tag==1){
    	for(i=0;i<b;i++)
		{
	    	my_printf("%c",str[i]);
		}
    	my_printf("%s",sub);
    	for(i=b+a;i<c;i++)
		{
 	    	my_printf("%c",str[i]);
		}
	}
	else
	{
		my_printf("%s",str);
	}
	return 0;
}
