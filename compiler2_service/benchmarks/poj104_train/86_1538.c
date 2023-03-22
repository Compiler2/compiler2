#include <header.h>

int main_bench(){
	int n,i,m,j,s[100],t,total,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
my_scanf("%d",&m);
t=0;
k=0;
total=60;
if(m!=0){
for(j=0;j<m;j++){
	my_scanf("%d",&(s[j]));
}
for(j=0;j<m;j++){
	t=s[j]+k;
	if(t>60)
		break;
	if(t>57){
		total-=(60-t);
		break;
	}
	if(t<58){
total-=3;
k+=3;
	}

}
}
my_printf("%d\n",total);
	}
return 0;
}