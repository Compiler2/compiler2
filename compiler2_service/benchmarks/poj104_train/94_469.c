#define NUM_ITER 17145

#include <header.h>

int  main_bench(){
int  sz[500]; 
int n;
my_scanf("%d",&n);
int i;
for(i=0;i<n;i++)
    my_scanf("%d",&sz[i]);
int j=0;
int s[500];
for(i=0;i<n;i++){
	if(sz[i]%2!=0){
s[j]=sz[i];
	j++;
	}
}
int b;
b=j;
int e;
for(int k=1;k<b;k++){
	for(j=0; j<(b-k); j++){
			if(s[j] > s[j+1]){
					e = s[j+1];
					s[j+1] = s[j];
					s[j] = e;
			}
	}
}
for(j=0;j<(b-1);j++)
my_printf("%d,",s[j]);
my_printf("%d",s[b-1]);
return 0;
}