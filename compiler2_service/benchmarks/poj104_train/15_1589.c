#include <header.h>

int main_bench(){
int n,s=0,i,j;
int a=0;
int b=0;
int sz[100][100];
my_scanf("%d",&n);
for(i=0;i<n;i++ ){
	for(j=0;j<n;j++){
		my_scanf("%d",&sz[i][j]);
	}
}
for(i=0;i<n;i++ ){
	for(j=0;j<n;j++){
		if(sz[i][j]==0)
			a++;
	}
		if(a!=0){
			break;
		}
	
}
for(j=0;j<n;j++ ){
	for(i=0;i<n;i++){
		if(sz[i][j]==0)
			b++;
	}
	if(b!=0){
		break;
	}
}
s=a*b-2*a-2*b+4;
my_printf("%d",s);
return 0;
}
		