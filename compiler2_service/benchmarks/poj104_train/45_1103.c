#define NUM_ITER 1007748

#include <header.h>

int main_bench(){
	int i,j,k,len[2];
	char word[2][50];
    for(i=0;i<2;i++){
		my_scanf("%s",word[i]);
		len[i]=strlen(word[i]);
	}
	int n=100;
	j=0;
	k=0;
    while(j<len[1]&&k<len[0]){
	    if(word[1][j]==word[0][k]){
			    n=j;
			    j++;
			    k++;
		}
		else{
			k=0;
			j++;
			n=100;
		}
	}
	if(n!=100)
		my_printf("%d\n",n-len[0]+1);
	return 0;
}
