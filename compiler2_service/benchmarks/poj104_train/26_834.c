#define NUM_ITER 1324113

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i=0,n,j=0;
	gets(a);
	n=strlen(a);
	while (i<n){
		b[j]=a[i];
	    if(a[i]!=' '){
			j++;
		}
		else if(a[i]==' '){
			if(a[i+1]!=' '&&a[i-1]!=' '){
                b[j]=' ';
				j++;
			
			}
		     else if(a[i+1]!=' '&&a[i-1]==' '){
				b[j]=' ';
				j++;
				
			}
		}



		i++;
	}
	for(i=0;i<j;i++){
		my_printf("%c",b[i]);
	}
 
	return 0;
		
	
}