#include <header.h>

int main_bench(){
  int m,sz[100];
  double k;
  k=0.0;
  double fz=2.0,fm=1.0,j;
  my_scanf("%d",&m);
  for(int i=0;i<m;i++){
	 my_scanf("%d",&sz[i]);
  }
  for(int y=0;y<m;y++){
	  for(int x=0;x<sz[y];x++){
		  k=k+(fz/fm);
		  j=fz;
		  fz=fm+j;
		  fm=j;
	  }
	  fz=2.0;
	  fm=1.0;
	  my_printf("%.3lf\n",k);
	  k=0.0;
  }
  return 0;
}

      