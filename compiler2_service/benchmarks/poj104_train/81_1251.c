#include <header.h>


int main_bench()
{
 int n,m,i,j,f;
 int zf[5][5];
 for(i=0;i<5;i++){
 	for(j=0;j<5;j++){
 		my_scanf("%d",&zf[i][j]);
 	}
 }
 my_scanf("%d %d", &n,&m);
 if((n>=5 || n<0) || (m>=5 || m<0)){
 	my_printf("error");
 }else {
  for(i=0;i<5;i++){
  	if(i==n){
  		f=m;
  	}else if(i==m){
  	f=n;
  	}else {
  	f=i;
  	}
  	for(j=0;j<5;j++){
  		if(j==0){
  		my_printf("%d",zf[f][j]);
  		}else if(j==4){
  		my_printf(" %d\n", zf[f][j]);
  		}else {
  		my_printf(" %d", zf[f][j]);
  		}
  	}
  }
 }
}