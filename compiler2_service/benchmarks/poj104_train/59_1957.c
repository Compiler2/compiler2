#define NUM_ITER 56

#include <header.h>

 int main_bench(){
 	int n,m,h,l,i,e,a;
 	char s[200][200],w[200][200];
 	my_scanf("%d",&n);
 	for(h=0;h<n;h++){
 			my_scanf("%s",s[h]);
 		}
 	for(h=0;h<n;h++){
 		for(l=0;l<n;l++){
 			w[h+1][l+1]=s[h][l];
 		}
 	}
 	my_scanf("%d",&m);
 	for(e=1;e<m;e++){
 		for(h=1;h<n+1;h++){
 		    for(l=1;l<n+1;l++){
 			if(w[h][l]=='@'){
 				w[h][l]='^';
 			}
 		}
 	  }
 	  for(h=1;h<n+1;h++){
 		    for(l=1;l<n+1;l++){
 			if(w[h][l]=='^'){
 				if(w[h-1][l]=='.'){
 					w[h-1][l]='@';
 				}
 				if(w[h+1][l]=='.'){
 					w[h+1][l]='@';
 				}
 				if(w[h][l-1]=='.'){
 					w[h][l-1]='@';
 				}
 				if(w[h][l+1]=='.'){
 					w[h][l+1]='@';
 				}
 					w[h][l]='@';
 			}
 		}
 	  }
 	}
 	a=0;
 	for(h=1;h<n+1;h++){
 		for(l=1;l<n+1;l++){
 			if(w[h][l]=='@'){
 				a++;
 			}
 		}
 	}
 		 my_printf("%d\n",a);
  
   
	
	return 0;
}
