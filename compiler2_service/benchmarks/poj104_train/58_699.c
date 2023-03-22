#define NUM_ITER 1515059

#include <header.h>



int islegal(char seq[],int size)
{
	int i,flag=1; char*ptr;
	ptr=seq;
	if(*ptr=='_'||isalpha(*ptr)!=0){
		for(i=1;i<size;i++){
			ptr=ptr+sizeof(char); 
			if(*ptr!='_'&&isalpha(*ptr)==0
				&&isdigit(*ptr)==0){
				flag=0;break;
			}
		}
	}else{
		flag=0;}
	return flag;	
}

int main_bench()
{
	int n,i,len;
	char zfc[80000];
	gets(zfc);
	n=atoi(zfc);
	for(i=0;i<n;i++){
		gets(zfc);
		len=strlen(zfc);
		my_printf("%d\n",islegal(zfc,len));
	}
	return 0;
}