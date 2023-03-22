#define NUM_ITER 62

#include <header.h>

int main_bench(){
	char sz[105][105]={'#'},a[105][105]={'#'};
int n,i,j,m,k=0,t;
my_scanf("%d",&n);
for(i=1;i<=n;i++){
	
	my_scanf("%s",sz[i]);
}
for(t=1;t<=n;t++){
		strcpy(a[t],sz[t]);
	
	}

my_scanf("%d",&m);
for(m;m>1;m--){
	for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			if(j!=0){
				if(sz[i][j]=='@'){
					if(sz[i+1][j]!='#'){
						a[i+1][j]='@';
					}
					if(sz[i-1][j]!='#'){
						a[i-1][j]='@';
					}
					if((sz[i][j+1]!='#')&&(sz[i][j+1]!='\0')){
						a[i][j+1]='@';
					}
					if(sz[i][j-1]!='#'){
						a[i][j-1]='@';
					}
				}
			}else{
                	if(sz[i][j]=='@'){
				if(sz[i+1][j]!='#'){
						a[i+1][j]='@';
					}
					if(sz[i-1][j]!='#'){
						a[i-1][j]='@';
					}
					if(sz[i][j+1]!='#'){
						a[i][j+1]='@';
					}
		}
			}
		}
	}
	for(t=1;t<=n;t++){
		strcpy(sz[t],a[t]);
	
	}
}
for(i=1;i<=n;i++){
	for(j=0;j<n;j++){
		if(sz[i][j]=='@'){
			k++;
		}
	}
}
my_printf("%d",k);





		return 0;
	}