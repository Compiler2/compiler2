#define NUM_ITER 971893

#include <header.h>

int main_bench()
{
	char w[1000],ws[50][20]={0};
	int i,j=0,k=0;
    gets(w);
    int len=strlen(w);
	for(i=0;i<len;i++){
		if(w[i]!=' '){
			ws[j][k]=w[i];
			k++;
		}
		else if(w[i]==' '){
			j++;
			k=0;
		}
	}
	int min=strlen(ws[0]),max=strlen(ws[0]);
	int minw=0,maxw=0;
	for(i=1;i<=j;i++){
		if(min>strlen(ws[i])){
			min=strlen(ws[i]);
			minw=i;
		}
		if(max<strlen(ws[i])){
			max=strlen(ws[i]);
			maxw=i;
		}
	}
	my_printf("%s\n",ws[maxw]);
	my_printf("%s\n",ws[minw]);
	return 0;
}