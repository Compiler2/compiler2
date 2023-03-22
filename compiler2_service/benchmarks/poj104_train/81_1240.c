#include <header.h>


int main_bench(){
int i,j;
int k[5][5];
for(i=0;i<=4;i++){
	for(j=0;j<=4;j++){
		my_scanf("%d",&k[i][j]);
	}
}
int a,b;
my_scanf("%d %d",&a,&b);
if(a>=0&&a<=4&&b>=0&&b<=4){
	int h[5];
	for(i=a;;){
		for(j=0;j<=4;j++){
			h[j]=k[i][j];
			k[i][j]=k[b][j];
			k[b][j]=h[j];
		}
		break;
	}
	for(i=0;i<=4;i++){
	for(j=0;j<=4;j++){
		if(j==0)
			my_printf("%d",k[i][j]);
		else if(j==4)
			my_printf(" %d\n",k[i][j]);
		else
			my_printf(" %d",k[i][j]);
	}
}
}
else
my_printf("error");
	return 0;
}