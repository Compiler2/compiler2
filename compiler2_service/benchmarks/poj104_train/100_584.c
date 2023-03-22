#define NUM_ITER 941280

#include <header.h>

int main_bench()
{
	char str[301],cha[26]={0},flag;
	int i,len,l;
	my_scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++){
		if(str[i]>='a'&&str[i]<='z')
			cha[str[i]-97]++;
	}

	flag = 0;
	for(i=0;i<26;i++){
		if(cha[i]){
			my_printf("%c=%d\n",i+97,cha[i]);
			flag = 1;
		}
	}
	if(flag==0)
		my_printf("No\n");

	return 0;
}
