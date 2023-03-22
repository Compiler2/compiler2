#define NUM_ITER 234389

#include <header.h>

int shuzu(int n,int m);
int main_bench(){
	int a[10][10];
int i,j,d;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	int n,m;
	my_scanf("%d%d",&n,&m);
	int s;
	s=shuzu(n,m);
	if(s==0)
		my_printf("error");
	else{
		
            for(j=0;j<5;j++){
				d=a[m][j];
                a[m][j]=a[n][j];
				a[n][j]=d;
			}
		for(i=0;i<5;i++){
			my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
	return 0;
}


int shuzu(int n,int m){

	if(n<0||n>4||n<0||m>4){
		return 0;
	}
	else{
	
			
			return 1;
	}
}
	
	