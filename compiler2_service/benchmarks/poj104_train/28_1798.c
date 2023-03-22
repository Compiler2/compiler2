#define NUM_ITER 1005040

#include <header.h>

int main_bench()
{
	int a[300]={0},len,num=0,n=0,i,j;
	char s[30000];
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]!=' '){
			n++;
			if(i==len-1){
				a[num]=n;
			}
		}
		else if((s[i]==' ')&&(s[i-1]!=' ')){
			num++;
			a[num-1]=n;
			n=0;
		}
	}
	my_printf("%d",a[0]);
	if(num>1){
		for(j=1;j<=num;j++){
			my_printf(",%d",a[j]);
		}
	}
	return 0;
}