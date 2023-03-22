#define NUM_ITER 802222

#include <header.h>

int main_bench()
{
	char str[101],a[101],b[101];
	gets(str);
	char danci[101][101];
	int i,k,n,len;
	k=0;
	n=0;
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]!=' '){
			danci[n][k]=str[i];
			k++;
		}
		else{
			danci[n][k]='\0';
			n++;
			k=0;
		}
	}
	danci[n][k]='\0';
	my_scanf("%s",a);
	my_scanf("%s",b);
	int e;
	for(i=0;i<n+1;i++){
		if(strcmp(danci[i],a)==0){
			strcpy(danci[i],b);
		}
	}
	for(i=0;i<n;i++){
		my_printf("%s ",danci[i]);
	}
	my_printf("%s",danci[n]);
return 0;
}