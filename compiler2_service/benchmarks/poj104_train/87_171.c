#define NUM_ITER 11331

#include <header.h>

int main_bench(){
int sz[7],s,j,i;
for (j=0;j<100;j++){
for (i=1;i<7;i++){
	my_scanf("%d",&sz[i]);
}
if(sz[1]==0&&sz[2]==0&&sz[3]==0&&sz[4]==0&&sz[5]==0&&sz[6]==0)
break;
s=(12+sz[4])*3600+sz[5]*60+sz[6]-sz[1]*3600-sz[2]*60-sz[3];
my_printf("%d\n",s);
}
return 0;
}