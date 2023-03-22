#include <header.h>

int main_bench(){
int n,i;
int game[201][2]={0};
int a=0,b=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d %d",&game[i][0],&game[i][1]);
}
for(i=0;i<n;i++){
	if(game[i][0]==game[i][1]){
		continue;}
	else if(game[i][0]==0&&game[i][1]==1){
		a++;
		continue;
	}
	else if(game[i][0]==0&&game[i][1]==2){
		b++;
		continue;
	}
	else if(game[i][0]==1&&game[i][1]==0){
		b++;
		continue;
	}
	else if(game[i][0]==1&&game[i][1]==2){
		a++;
		continue;
	}
	else if(game[i][0]==2&&game[i][1]==0){
		a++;
		continue;
	}
	else if(game[i][0]==2&&game[i][1]==1){
		b++;
		continue;
	}
}
if(a==b){
	my_printf("Tie");
}
else if(a>b){
	my_printf("A");
}
else{
	my_printf("B");
}
	return 0;
}