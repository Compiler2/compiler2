#include <header.h>

int main_bench(){
    int n;
	int a[200],b[200];
	int i;
	int x=0;
	int y=0;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++){
		my_scanf ("%d %d",&a[i],&b[i]);
		if ((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			x++;
		}else if ((a[i]==1&&b[i]==0)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
			y++;
		}
	}
	if (x>y){
		my_printf ("A");
	}else if (x<y){
		my_printf ("B");
	}else {
		my_printf ("Tie");
	}
	
		

	return 0;
}	
