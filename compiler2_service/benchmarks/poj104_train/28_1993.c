#define NUM_ITER 1407187

#include <header.h>

int main_bench(){
int j,q,k,x,m,l;
char a[30000];
int b[10000];
gets(a);
j=0;
q=0;
l=strlen(a);
for (int i=0;i<l;i++){
	if(a[i]==' '){
			b[j]=i-q;
			k=0;
			for (int m=i+1;m<l;m++){
				if(a[m]==' '){k++;}
				else{break;}}			
	
	i=i+k;
	q=i+1;
    j++;   
	}
}
for (int i=0;i<j;i++){my_printf("%d%c",b[i],',');}
my_printf("%d",l-q);
return 0;
}