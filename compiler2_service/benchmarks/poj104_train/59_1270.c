#define NUM_ITER 63

#include <header.h>

char zf[1001][1001];
int main_bench(){
int m,n,i,j,k,p=0;

my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%s",zf[i]);
   
}
my_scanf("%d",&m);

for(k=0;k<m-1;k++){
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(zf[i][j]=='.'&&(zf[i-1][j]=='@'||zf[i][j-1]=='@'||zf[i+1][j]=='@'||zf[i][j+1]=='@')){
		zf[i][j]='*';
		}
	}
	}
 for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	if(zf[i][j]=='*'){
	zf[i][j]='@';
	}
	}
 }
    

}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(zf[i][j]=='@'){
		p++;
		}
	}
}
my_printf("%d\n",p);
return 0;
}