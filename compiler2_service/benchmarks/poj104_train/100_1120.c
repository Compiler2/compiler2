#define NUM_ITER 422353

#include <header.h>

int main_bench() 
{ 
int count[26]={0},t=0,j,k=0; 
char i,str[300],*ps,zf[26]; 
my_scanf("%s",str); 
for(ps=str;*ps!='\0';ps++) 
{ 
	if(*ps>='a'&&*ps<='z'){ 
		for(i='a';i<='z';i++){ 
			if(i==*ps){ 
				t=i-'a'; 
				zf[t]=i; 
				count[t]++; 
			} 
		} 
	} 
} 
for(j=0;j<26;j++){ 
	if(count[j]!=0){ 
		my_printf("%c=%d\n",zf[j],count[j]); 
		k+=1; 
	} 
} 
if(k==0) 
my_printf("No"); 
return 0; 
} 