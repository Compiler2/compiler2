#include <header.h>

int judge(int x,int y,int z){
	if(x>=y&&x<=z){return 1;}
	return 0;

}
int main_bench(){



	int max,min,start[50000],end[500000],all,i,p,ornot;
	max=0;min=9999;
	my_scanf("%d",&all);
	for(i=0;i<all;i++){my_scanf("%d %d",&start[i],&end[i]);if(max<end[i]){max=end[i];}if(min>start[i]){min=start[i];}}
	for(i=0;i<all;i++){ornot=0;for(p=0;p<all;p++){if(i!=p&&judge(start[i],start[p],end[p])){ornot=1;}if(start[i]==min){ornot=1;}}if(ornot==0){my_printf("no");return 0;}}
	for(i=0;i<all;i++){ornot=0;for(p=0;p<all;p++){if(i!=p&&judge(end[i],start[p],end[p])){ornot=1;}if(end[i]==max){ornot=1;}}if(ornot==0){my_printf("no");return 0;}}
	my_printf("%d %d",min,max);

return 0;}