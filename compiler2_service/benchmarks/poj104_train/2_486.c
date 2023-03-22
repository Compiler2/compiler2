#include <header.h>

int main_bench(){
	int max,max1,t,k,x[28]={0},n,a,b,c,d,i,j;
	char cc,y[100][32],q;
	my_scanf("%d",&n);
	my_scanf("%c",&cc);
	for(i=1;i<=n;i++){
		gets(y[i]);
		for(j=2;y[i][j];j++){
			if(y[i][j]>='A'&&y[i][j]<='Z'){
				x[y[i][j]+1-'A']++;}
		}}
	max=x[1];
	max1=1;
	for(i=2;i<=26;i++){
		if(x[i]>max){
			max=x[i];
			max1=i;}}
	q='A'-1+max1;
	my_printf("%c\n",q);
	my_printf("%d\n",max);
	for(i=1;i<=n;i++){
		for(j=2;y[i][j];j++){
			if(y[i][j]==q){
				for(t=0;y[i][t];t++){
					if(y[i][t]==' ')break;
					else my_printf("%c",y[i][t]);
				}
				my_printf("\n");
			break;
			}
		}
	}
}

	
		