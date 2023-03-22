#define NUM_ITER 21114

#include <header.h>

char a[100][100000];
int main_bench(){
	struct {
		int s;
		char z;
	}b[100][27];
	int n,i,j,k,m,g[100];
	my_scanf("%d",&n);
	my_scanf("\n");
	for(i=0;i<n;i++){
		gets(a[i]);	
		b[i][0].z=a[i][0];
		b[i][0].s=1;
		g[i]=1;
		for(j=1;a[i][j]!='\0';j++){
			for(m=0,k=0;k<g[i];k++){
				if(a[i][j]==b[i][k].z)
					b[i][k].s++;
				else m++;
			}
			if(m==g[i]){
				g[i]++;
				b[i][g[i]-1].z=a[i][j];
				b[i][g[i]-1].s=1;
		}}
	}
	for(i=0;i<n;i++){
		for(m=0,j=0;j<g[i];j++){
			if(b[i][j].s==1){
				my_printf("%c\n",b[i][j].z);
				break;
			}else{
				m++;
			}
			if(m==g[i])
				my_printf("no\n");
	}}
	return 0;
}