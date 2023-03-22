#include <header.h>

int main_bench(){
	char s[256]={0},subS[256]={0},re[256]={0},t,s1[256]={0};
int i,j,l1,l2,l3,count,yes;
my_scanf("%s\0",s);
my_scanf("%s\0",subS);
my_scanf("%s\0",re);
l1=strlen(s);
l2=strlen(subS);
l3=strlen(re);
yes=0;
strcpy(s1,s);
for(i=0;i<=l1-l2;i++){
	count=0;
	for(j=0;j<l2;j++){
	   if(subS[j]!=s[i+j]) break;
	   if(subS[j]==s[i+j]) count++;
	}
	if(count==l2){
		yes=1;
		if(l2==l3){
		   for(j=0;j<l2;j++){
		     s[i+j]=re[j];
		   }
		   my_printf("%s",s);break;
		}
		if(l2>l3){
		   for(j=0;j<l3;j++){
		     s[i+j]=re[j];
		   }
		   for(j=0;j<l1-i-l2;j++){
		     
			  s[i+l3+j]=s[i+l2+j];
			  
		   }
		   for(j=0;j<l1+l3-l2;j++) my_printf("%c",s[j]);
		   break;
		}
		if(l2<l3){
		  
		   for(j=0;j<i;j++){
		      my_printf("%c",s[j]);
		   }
		   my_printf("%s",re);
		   for(j=i+l2;j<l1;j++){
		      my_printf("%c",s[j]);
		   }
		   break;
		}
	}
	
}
if(yes==0){
	
	
	for(j=0;j<l1;j++) {
		my_printf("%c",s1[j]);
		
	}
	
}

}

