#include <header.h>

int main_bench(){
	int n, i;
	my_scanf("%d", &n);
	int a[1000], b[1000];
	for(i=0;i<n;i++){
		my_scanf("%d %d", &a[i], &b[i]);
	}
	int x=0, y=0, z=0;
	for(i=0;i<n;i++){
		if(a[i]==0 && b[i]==1){
			x++;
		}
		if(a[i]==1 && b[i]==2){
			x++;
		}
		if(a[i]==2 && b[i]==0){
			x++;
		}
		if(b[i]==0 && a[i]==1){
			y++;
		}
		if(b[i]==1 && a[i]==2){
			y++;
		}
		if(b[i]==2 && a[i]==0){
			y++;
		}
		if(a[i]==0 && b[i]==0){
			z++;
		}
		if(a[i]==1 && b[i]==1){
			z++;
		}
		if(a[i]==2 && b[i]==2){
			z++;
		}
	}

  if(x>y){
	my_printf("A");
  }
  if(x==y){
	my_printf("Tie");
  }
  if(x<y){
	  my_printf("B");
  }
  return 0;
  }


