#include <header.h>


int gedui(int zong, int duishu,int ini){
	int p,k=0,end;
	end=zong/duishu;
	if(duishu>2){
		for(p=ini;p<=end;p++){
			k+=gedui(zong-p,duishu-1,p);
		}
	}
	else if(duishu==2){
		k=zong/2-ini+1;
	
	}
	else if(duishu==1){
		k=1;
	}
	return k;
}

int r(int zong,int dui){
	int o,count=0;
	for(o=1;o<=dui;o++){
		count+=gedui(zong,o,1);
	
	}
	return count;
}



int main_bench(){
	int k,m,n;
	int i,dui,u;
	my_scanf("%d",&k);
	for(i=0;i<k;i++){
		u=0;
		my_scanf("%d%d",&m,&n);
		if(m>n){
			dui=n;
		}
		else{
			dui=m;
		}
		u=r(m,dui);
		if(i!=0){
			my_printf("\n");
		}
		my_printf("%d",u);
	}
	return 0;
}
