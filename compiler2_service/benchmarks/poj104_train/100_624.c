#define NUM_ITER 28875

#include <header.h>

int main_bench()
{
	char a[301]={'0'},b[26]={'a'};
	int i,n=0,j,t=0,s=0;
	
	for(i=0;;i++){
		
           	my_scanf("%c",&a[i]);
	           t++;
			   
            if(a[i]=='\n')
		      break;
	   }
	for(i=0;i<t;i++){
		if(a[i]>='a'&&a[i]<='z'){
			s=s+1;
		}
	}
	if(s==0)
		my_printf("No");
	
	
	for(j=0;j<26;j++){
		n=0;
		b[0]='a';
		b[j+1]=b[j]+1;

	   
	   for(i=0;i<t;i++){
           	if(a[i]==b[j]){
				n++;
			}
			
	   }
	   if(n!=0){         
		 my_printf("%c=%d\n",b[j],n);
	   }
	   
	}
	
	
	



	return 0;
}
