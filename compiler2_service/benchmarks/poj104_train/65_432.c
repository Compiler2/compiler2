#define NUM_ITER 37522

#include <header.h>

int main_bench(){
	int n,i,sza[200],szb[200],a=0,b=0;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++){
		my_scanf ("%d%d",&(sza[i]),&(szb[i]));
		if ((sza[i]==0&&szb[i]==1)||(sza[i]==1&&szb[i]==2)||(sza[i]==2&&szb[i]==0)){
			a++;
		}else if ((szb[i]==0&&sza[i]==1)||(szb[i]==1&&sza[i]==2)||(szb[i]==2&&sza[i]==0)){
			b++;
		}else if (sza[i]=szb[i]){
			continue;
	}
	}
	if (a==b){
		my_printf ("Tie");
	}else { if (a>b){
		my_printf ("A");
	}else {my_printf ("B");
	}
	}
     return 0;
}

	
		