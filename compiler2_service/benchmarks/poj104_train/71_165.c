#define NUM_ITER 22783

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);

	int i,year,m1,m2;
	int max=0,min=0;
	for(i=0;i<n;i++){
	    my_scanf("%d%d%d",&year,&m1,&m2);   
	    if(m1>m2){
		max=m1;
		min=m2;
		}else{
		    max=m2;
		    min=m1;
		}

		if(year%4!=0||(year%100==0&&year%400!=0)){  
		    if((min==1&&max==10)||(min==2&&max==3)||(min==2&&max==11)||(min==3&&max==11)||(min==4&&max==7)||(min==9&&max==12)){
			my_printf("YES\n");
		    }else{
			my_printf("NO\n");
		    }           
		}else{       
                      if((min==3&&max==11)||(min==4&&max==7)||(min==9&&max==12)||(min==1&&max==4)||(min==1&&max==7)||(min==2&&max==8)){
			my_printf("YES\n");
		    }else{
			my_printf("NO\n");
		}
	    }



	}




	return 0;
}
