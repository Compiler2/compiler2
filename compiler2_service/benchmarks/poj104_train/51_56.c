#define NUM_ITER 769693

#include <header.h>

int main_bench(){
	int n,i,j,k,l,cmp,count,site,mid,timer,re[10],num[510][2]={0};
	char scan[501],u[510][510];
	my_scanf("%d",&n);
	my_scanf("%s",scan);
	count=-1;
	site=-1;
	cmp=0;
	timer=-1;
	l=strlen(scan);
	for(i=0;i<l-n+1;i++){
		count++;
		for(j=i;j<i+n;j++){
			site++;
			u[count][site]=scan[j];
		}
		u[count][n]=0;
		site=-1;
	}
	for(i=0;i<=count;i++){
		for(j=i;j<=count;j++){
			cmp=strcmp(u[i],u[j]);
			if(cmp==0){
				num[i][0]++;
				num[i][1]++;
			}
		}
	}
	for(i=1;i<=count;i++){
		for(j=0;j<count-i;j++){
			if(num[j][1]<num[j+1][1]){
				mid=num[j][1];
				num[j][1]=num[j+1][1];
				num[j+1][1]=mid;
			}
		}
	}
	for(i=0;i<=count;i++){
		if(num[i][0]==num[0][1]){
			timer++;
			re[timer]=i;
		}
	}
	if(num[0][1]>1){
	my_printf("%d\n",num[0][1]);
	for(i=0;i<=timer;i++){
		for(j=0;j<=count;j++){
			if(j==re[i]){
				my_printf("%s\n",u[j]);
			}
		}
	}
	}else{
		my_printf("NO");
	}
	return 0;
}
