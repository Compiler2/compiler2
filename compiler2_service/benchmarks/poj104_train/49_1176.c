#define NUM_ITER 1037120

#include <header.h>

int main_bench()
{
	char s[500];
	int i,j,p,q,l,t=1;
	gets(s);
	l=strlen(s);
	i=0;j=1;p=0;q=0;
	for(j=1;j<l;j++){
	
		for(i=0;i<=l-j;i++){
			for(p=i,q=i+j;p<=q;p++,q--){
				if(s[p]==s[q])t=t*1;
				else t=t*0;}
			if(t==1){
				for(t=i;t<i+j;t++){my_printf("%c",s[t]);}my_printf("%c\n",s[i+j]);}t=1;}}}