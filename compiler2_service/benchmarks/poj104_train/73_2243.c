#include <header.h>

int main_bench()
{
	int a[5][5],max[5],min[5],i,b,c,j,k=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
		max[i]=a[i][0];
	}
	for(j=0;j<5;j++){
		min[j]=a[0][j];
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[i][j]>max[i]){
				max[i]=a[i][j];
			}


		}
	}
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
            if(a[i][j]<min[j]){
				min[j]=a[i][j];
			}
		}
	}






	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(min[j]==max[i]){
				b=i+1;
				c=j+1;
				my_printf("%d %d ",b,c);
				my_printf("%d",max[i]);
				k++;

			}

			

			
		}
	}
	if(k==0){
		my_printf("not found");
	}

			
	return 0;
}
