#define NUM_ITER 1206

#include <header.h>

int main_bench()

{	int i,j,n,max=0;
	int sum[500]={0};
	char c[500];
	char d[500][500];
	char kongbai[500]={'0'};
	my_scanf("%d",&n);
	my_scanf("%s",c);
	for(i=0;i<strlen(c)-n+1;i++){
		for(j=0;j<n;j++){
			d[i][j]=c[i+j];
		}
	}
	for(i=0;i<strlen(c)-n+1;i++){
		d[i][n]='\0';
	}
	for(i=0;i<strlen(c)-n+1;i++){
		for(j=i;j<strlen(c)-n+1;j++){
			if(strcmp(d[i],d[j])==0){
				sum[i]++;
			}
		}
	}
	for(i=0;i<strlen(c)-n+1;i++){
		if(sum[i]>=max){
			max=sum[i];
		}
	}
	if(max==1){
		my_printf("NO");
	}
	else{
		my_printf("%d\n",max);
		for(i=0;i<strlen(c)-n+1;i++){
			if(sum[i]==max){
				puts(d[i]);
			}
		}
	}
my_printf("\n");
	return 0;
}

