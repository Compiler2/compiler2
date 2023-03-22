#include <header.h>

int main_bench(){
	int i,a,w1,w2,b;
	double n,k;
	a=0;
	b=0;
	char s1[502],s2[502];
     my_scanf("%lf",&n);
		my_scanf("%s %s",s1,s2);
		w1=strlen(s1); 
		w2=strlen(s2);
	
	if(w1!=w2){
         my_printf("error");
		 b=1;
	}
	else{
		for(i=0;i<w1;i++){
			if((s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G')&&(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G')){
				if(s1[i]==s2[i]){
                               a++;
				}
			}
             
			else{
                 my_printf("error");
				 b=1;
				 break;
				}
		}
			k=1.0*a/w1;
			if(k>n&&b==0){
				my_printf("yes");
			}
			else if(k<=n&&b==0)
			{
				my_printf("no");
			}
	}   
	return 0;
}