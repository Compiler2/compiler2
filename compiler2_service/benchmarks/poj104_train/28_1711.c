#define NUM_ITER 276841

#include <header.h>

int main_bench()
{
	char *str;
	int n,num[128]={0},i=0,j,k=1;
	char *p;
	
	str = (char *)malloc(1000*sizeof(char));
	gets(str);
	
	for(p=str;*p!='\0';p++){
		if(*(p-1)==' '&&*p!=' ') k++;
	}
	
	for(p=str;*p!='\0';p++){
		if (*p!=' '&&i==0) {
			num[0]++;
			continue;
		}
		if (*p!=' ') num[i]++;
		if (*p==' '&&*(p+1)!=' '){
			i++;
		}
	}
	
	for (j=0;j<k-1;j++){
		my_printf("%d,",num[j]);
	}
	my_printf("%d",num[j]);

}
	
