#define NUM_ITER 36202

#include <header.h>

int main_bench(){
	int n,i,p,q;
	char s[51];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	   my_scanf("%s",s);
	   q=0;
	   for(p=0;s[p]!='\0';p++){
		   q++;
	   }
	   if(s[q-2]=='e'&&s[q-1]=='r'){
		   s[q-2]='\0';
	   }else if(s[q-3]=='i'&&s[q-2]=='n'&&s[q-1]=='g'){
		   s[q-3]='\0';
	   }else if(s[q-2]=='l'&&s[q-1]=='y'){
		   s[q-2]='\0';
	   }
	   my_printf("%s\n",s);
	   }
	return 0;
}