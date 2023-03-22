#include <header.h>

int main_bench()
{
	int a[999][10]={{0}};
	int n;
	my_scanf("%d",&n);
	int i,j;
	int N=0;
	int total=0;
	for(i=1;i<n+1;i++){
		my_scanf("%d",&a[i][0]);
		for(j=1;j<=a[i][0];j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	int total1;
	for(i=1;i<n+1;i++){
		if(a[i][0]==0){
			my_printf("60\n");
		}
		else if(a[i][0]!=0){
			j=a[i][0];
			total1=a[i][j]+j*3;
			if(total1>63){
				do{
					total1=a[i][j-1]+j*3-3;
					if(total1>63)
						j--;
				}while(total1>63);
				N=a[i][j-1]+j*3-3;
				if(N<60){
					total=60-N+a[i][j-1];
				}
				else if(N>=60&&N<=63)
					total=a[i][j-1];
				else if(N>63){
					total=a[i][j-1]-N+60;
				}
				my_printf("%d\n",total);
			}
			else if(total1<=63){
				if(total1<60)
					total=60-j*3;
				else 
					total=a[i][j];
				my_printf("%d\n",total);
			}
		}
	}
	return 0;
}

