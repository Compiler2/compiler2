#define NUM_ITER 875645

#include <header.h>


int main_bench(){
	double k;
	my_scanf("%lf",&k);
	char moban[500],hubu[500];
	my_scanf("%s",moban);
	my_scanf("%s",hubu);
	int m,n;
	m=strlen(moban);
	n=strlen(hubu);
	if(m!=n) my_printf("error");
	else{
		int count=0;
		for(int i=0;i<n;i++){
			if(moban[i]!='A'&&moban[i]!='T'&&moban[i]!='C'&&moban[i]!='G') count++;
			if(hubu[i]!='A'&&hubu[i]!='T'&&hubu[i]!='C'&&hubu[i]!='G') count++;
			
		
		}
		if(count!=0) my_printf("error");
		else{
			int sum=0;
			for(int i=0;i<n;i++){
				if(moban[i]==hubu[i]) sum++;

				
				}
				double result=(double)sum/n;
				if(result>k)my_printf("yes");
				else my_printf("no");
			
			
			}
	
	
	}
	
	return 0;
}