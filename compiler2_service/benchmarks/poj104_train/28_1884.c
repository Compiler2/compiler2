#define NUM_ITER 1337298

#include <header.h>




int main_bench()
{
	char ju[10000];
	int i,a,num,pan=0;
	gets(ju);
	a=strlen(ju);
	i=0;
	num=0;
	while(i<a-1){
		if(ju[i]==' '){
			my_printf("%d",num);
			pan=1;
			i++;
			num=0;
			break;
		}else{
			num++;
			i++;
		}
	}
	while(i<a-1){
		if(ju[i-1]!=' '&&ju[i]==' '){
			my_printf(",%d",num);
			i++;
			num=0;
		}else if(ju[i]!=' '){
			num++;
			i++;
		}else i++;
	}
	if(pan==1)my_printf(",%d\n",num+1);
	else my_printf("%d\n",num+1);
	return 0;
}

