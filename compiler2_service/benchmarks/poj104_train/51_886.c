#define NUM_ITER 247365

#include <header.h>

int main_bench(){
	int n;
	char s[505],temp[6];
	char an[505][6];
	int bn[505]={0};
	my_scanf("%d%s",&n,s);
	int len=strlen(s);
	int count=1,i,j;
	for(i=0;i<n;i++){
		an[0][i]=s[i];
	}
	an[0][n]='\0';
	bn[0]=1;
	for(i=1;i<=len-n;i++){
		for(j=i;j<i+n;j++)
			temp[j-i]=s[j];
		temp[n]='\0';
		int k=0;
		while(k<count&&strcmp(temp,an[k])!=0){
			k++;
		}
		if(k==count){
			strcpy(an[count],temp);
			bn[count]=1;
			count++;
		}
		else
			bn[k]++;
	}
	int max=1;
	for(i=0;i<count;i++){
		if(bn[i]>max)max=bn[i];
	}
	if(max==1){
		my_printf("NO");
	}
	else{
		my_printf("%d\n",max);
		for(i=0;i<count;i++){
			if(bn[i]==max){
				my_printf("%s\n",an[i]);
			}
		}
	}
	return 0;
}