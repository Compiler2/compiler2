#define NUM_ITER 365044

#include <header.h>


int main_bench()
{
	char s1[50],s2[50],s3[50];
	my_scanf("%s %s",s1,s2);
    int l=strlen(s1);
	int i,j;
	for(i=0;i<50;i++){
		if(s2[i]==s1[0]){
			for(j=0;j<l;j++){
				s3[j]=s2[i+j];
			}
			s3[l]='\0';
		}
		if(strcmp(s1,s3)==0){
			my_printf("%d",i);
			break;
		}
		else{
			continue;
		}
	}
	
	return 0;
}