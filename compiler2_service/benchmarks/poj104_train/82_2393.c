#define NUM_ITER 33024

#include <header.h>

int main_bench(){
	int i,j,t=0,max=0,n;
	int xy[100][2];
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			my_scanf ("%d",&xy[i][j]);
		}
	}
	for (j=0;j<n;j++){
		if (xy[j][0]>=90&&xy[j][0]<=140&&xy[j][1]>=60&&xy[j][1]<=90){
			t=t+1;
			for (i=j+1;i<n;i++){
                  if (xy[i][0]>=90&&xy[i][0]<=140&&xy[i][1]>=60&&xy[i][1]<=90){
					  t++;
				  }
				  else break;
			}
			if (t>max)  max=t;
			
		}
		t=0;
	}
	my_printf ("%d",max);
	return  0;
}

