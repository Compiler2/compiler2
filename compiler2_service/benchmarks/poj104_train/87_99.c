#include <header.h>

int main_bench(){
int sz[6]={1,1,1,1,1,1},x,i,j;
for(i=0;;i++){
	for(j=0;j<6;j++){
	my_scanf("%d",&sz[j]);
	}
	if(sz[0]==0){
	break;
	}
	x=(sz[3]+12-sz[0])*3600-sz[1]*60-sz[2]+sz[4]*60+sz[5];
	my_printf("%d\n",x);

}
return 0;
}
