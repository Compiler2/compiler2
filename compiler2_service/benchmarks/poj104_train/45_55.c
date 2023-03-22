#define NUM_ITER 1175654

#include <header.h>



int main_bench()
{
     char  s[50],w[50];
     int i,j; 
	 my_scanf("%s %s",s,w);
     
	 for(i=0;w[i]!='\0';i++){
		 if(w[i]==s[0]){
			 
			 int n=0;
			 
			 for(j=0;s[j]!='\0';j++){
				 if(s[j]!=w[i+j])
				 {n++;break;}
			 }
				 if(n==0)
				 {	 my_printf("%d",i);break;}
			 }
		 }

	return 0;
}

