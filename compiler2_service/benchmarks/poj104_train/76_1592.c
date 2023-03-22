#include <header.h>

int main_bench(){
int n,szz[11111],szy[11111];

int x,e;
my_scanf("%d",&n);

for(int j=0;j<n;j++){
     
    my_scanf("%d",&szz[j]);

	my_scanf("%d",&szy[j]);
}

for(int k=1;k<=n;k++){
    
	

	for(int h=0;h<n-k;h++){
	    
		if(szz[h]>szz[h+1]){
		    
			e=szz[h+1];

			szz[h+1]=szz[h];

			szz[h]=e;
			e=szy[h+1];

			szy[h+1]=szy[h];

			szy[h]=e;		    
		
		}

	
	}
    


}

for(int i=0;i<n-1;i++){
    if(i==0){
	
	   

	   x=szz[i];
	
	}

	if(szz[i+1]>szy[i]){
	
	   my_printf("no");
	   
	   return 0;
	}
    
	if((szz[i+1]<=szy[i])){
	
	  

		if(szy[i]>szy[i+1]){
		
		   szy[i+1]=szy[i];


		
		
		}

	  


	
	}

}
my_printf("%d %d",szz[0],szy[n-1]);
return 0;
}
