#define NUM_ITER 572

#include <header.h>

int main_bench()
{
	int i,j,m,n,a[100][100]; 
	int shang,xia,zuo,you;
	my_scanf("%d %d",&m,&n);

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
		shang=0;
		zuo=0;
		xia=m-1;
		you=n-1;
	while(zuo<=you&&(shang<=xia)){
		if(zuo!=you&&shang!=xia){
		
			for(i=shang,j=zuo;j<=you;j++){
				my_printf("%d\n",a[i][j]);
			}
			for(j=you,i=shang+1;i<=xia;i++){
				my_printf("%d\n",a[i][j]);
			}
			for(i=xia,j=you-1;j>=zuo;j--){
				my_printf("%d\n",a[i][j]);
			}
			for(i=xia-1,j=zuo;i>shang;i--){
				my_printf("%d\n",a[i][j]);
			}
		}
		else if(zuo==you&&shang!=xia){
			for(j=zuo,i=shang;i<=xia;i++){
				my_printf("%d\n",a[i][j]);
			}
		}
		else if(shang==xia&&zuo!=you){
			for(i=shang,j=zuo;j<=you;j++){
				my_printf("%d\n",a[i][j]);
			}
		}
		else if(shang==xia&&zuo==you){
			i=shang;j=zuo;
			my_printf("%d\n",a[i][j]);
		}
		zuo++,shang++,you--,xia--;

			
	}
	

	return 0;
}

