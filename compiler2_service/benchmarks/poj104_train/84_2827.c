#define NUM_ITER 56138

#include <header.h>


 
main_bench(){

int n,m,a,b,p;

my_scanf("%d",&n);

for(int i=1;i<=n;i++){

	my_scanf("%d",&m);

	if(i==1){a=m;


	}

	else if(i==2){

		b=m;
     
		if(b>=a){p=a;

       a=b;

	   b=p;

		}


	}

	else if(i>=3){


		if (m>a&&m>b){


			p=a;

			a=m;

			b=p;


		}

		else {

			if(m<a&&m>b){


				b=m;

			}






		}
   

	
	}
}



my_printf("%d\n%d\n",a,b);





	return 0;
	  

}