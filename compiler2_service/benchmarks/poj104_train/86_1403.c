#include <header.h>

int main_bench(){
	int n,m,sz[100],i,result;
	my_scanf("%d",&n);
	while(n--){
		my_scanf("%d",&m);

		if(m==0)
			my_printf("60\n");

		else{
			for(i=0;i<m;i++){
				my_scanf("%d",&sz[i]);
			}

			if(sz[m-1]+3*(m)<=60){
				result=60-(sz[m-1]+3*(m))+sz[m-1];
				my_printf("%d\n",result);
			}

			else if(sz[m-1]+3*m>60&&sz[m-1]+3*m<=63)
				my_printf("%d\n",sz[m-1]);

			else {
				for(i=m-2;i>=0;i--){
					if(sz[i]+3*(i+1)<=60){
						my_printf("%d\n",60-(sz[i]+3*(i+1))+sz[i]);
						break;}
					if(sz[i]+3*(i+1)>60&&sz[i]+3*(i+1)<=63){
						my_printf("%d\n",sz[i]);
						break;}
				}
			}


		}
	}
	
	return 0;
}