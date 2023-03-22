#include <header.h>

int main_bench(){
    int n;
	my_scanf("%d",&n);
	int i;
	int A,B;
	int Aw=0,Bw=0;
	for(i=0;i<n;i++){
		my_scanf("%d %d",&A,&B);
		if(A==0&&B==1){
	    	Aw += 1;
		}else if(A==0&&B==2){
		    Bw +=1;
		}else if(A==1&&B==0){
			Bw +=1;
		}else if(A==1&&B==2){
			Aw +=1;
		}else if(A==2&&B==0){
			Aw +=1;
		}else if(A==2&&B==1){
			Bw +=1;
		}
	}
	if(Aw>Bw){
		my_printf("A\n");
	}else if(Aw<Bw){
		my_printf("B\n");
	}else if(Aw=Bw){
		my_printf("Tie\n");
	}
	return 0;
}