#define NUM_ITER 528099

#include <header.h>

int main_bench(){
	char s[257]={'0'},sub[257]={'0'},rep[257]={'0'},temp[257]={'0'};
	my_scanf("%s%s%s",s,sub,rep);
	int i,j,k,len1,len2,time;
	len1=strlen(s);
	len2=strlen(sub);
	for(i=0;i<len1;i++){
		k=i;
		for(j=0;j<len2;j++,i++){
			temp[j]=s[i];
		}
		i=k;
		if(strcmp(temp,sub)==0){
			time=i;
			break;
		}
	}
	if(strcmp(temp,sub)==0){
	for(i=time,j=0;i<time+len2;i++,j++){
s[i]=rep[j];
	}
}
	my_printf("%s",s);
	return 0;
}