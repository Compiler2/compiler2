#define NUM_ITER 123740

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d\n",&n);
	char art[8000];
	gets(art);
	int len;
	len=strlen(art);
	int i,j=0,k=0;
	char wor[200][40];
	for(i=0;i<len;i++){
		if(art[i]!=' '){
			wor[j][k]=art[i];
			k++;
		}else{
			wor[j][k]='\0';
			k=0;
			j++;
		}
	}
	wor[j][k]='\0';
	int sum=0;
	int a;
	int be=0,ed;
	for(i=0;i<n;i++){
		a=strlen(wor[i]);
		sum+=a+1;
		if(sum<=81){
			ed=i;
		}else{
			for(j=be;j<ed;j++){
				my_printf("%s ",wor[j]);
			}
			my_printf("%s\n",wor[ed]);
			be=i;
			sum=a+1;
		}
	}
	for(i=be;i<n-1;i++){
		my_printf("%s ",wor[i]);
	}
	my_printf("%s",wor[n-1]);
	return 0;
}
