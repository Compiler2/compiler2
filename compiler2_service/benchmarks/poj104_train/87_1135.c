#define NUM_ITER 14082

#include <header.h>

int main_bench(){
	int t[100][6],i,a,b,result[100],k;
	for(i=0;i<100;i++){
		my_scanf("%d%d%d%d%d%d",&t[i][0],&t[i][1],&t[i][2],&t[i][3],&t[i][4],&t[i][5]);
		if(t[i][0]==0&&t[i][1]==0){
			break;
		}
		a=t[i][0]*60*60+t[i][1]*60+t[i][2];
		b=(12+t[i][3])*60*60+t[i][4]*60+t[i][5];
		result[i]=b-a;
	}
	k=i;
    for(i=0;i<k;i++){
		my_printf("%d\n",result[i]);
	}
	return 0;
}
