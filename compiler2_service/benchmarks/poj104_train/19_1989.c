#define NUM_ITER 819828

#include <header.h>

int main_bench(){
	char m[100],z[100],t[100];
	gets(m);
	gets(z);
	gets(t);
	char fz[100][100]; 
	int len1=strlen(m);
	int i,k=0,j=0,num=1; 
	for(i=0;i<len1;i++){
		if(m[i]!=32){
			fz[k][j]=m[i];
			j++;
		}
		else{
			num++;
			k++;
			j=0;
		}
	}
	for(k=0;k<num;k++){
		if(k!=num-1){
	        int result=strcmp(fz[k],z);
		    if(result==0){
			    strcpy(fz[k],t);
			    my_printf("%s ",fz[k]);
			}
		    else{
			    my_printf("%s ",fz[k]);
			}
		}
		if(k==num-1){
            int result=strcmp(fz[k],z);
		    if(result==0){
			    strcpy(fz[k],t);
			    my_printf("%s",fz[k]);
			}
		    else{
			    my_printf("%s",fz[k]);
			}
		}

	}
	return 0;
}




		
