#define NUM_ITER 1341151

#include <header.h>

int main_bench()
{
	char s[1000],word[100][20];
	int i,j,k,len;
	gets(s);
	len=strlen(s);
	j=0;
	k=0;
	for(i=0;i<len;i++){
		if(s[i]!=' '){
			word[j][k]=s[i];
			k++;
		}
		else if((s[i]==' ')&&(s[i-1]!=' ')){
			word[j][k]='\0';
			j++;
			k=0;
		}
		else{
			continue;
		}
	}
	word[j][k]='\0';
	for(i=0;i<j;i++){
		my_printf("%s ",word[i]);
	}
	my_printf("%s",word[i]);
	return 0;
}
