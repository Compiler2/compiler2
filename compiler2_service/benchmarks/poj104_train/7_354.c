#include <header.h>

int main_bench()
{ 
    char s[256], w[256],v[256]; 
    int i, j,slen,wlen,k;
    my_scanf("%s", w);
    my_scanf("%s", s);
    my_scanf("%s", v);
        slen = strlen(s);
    wlen = strlen(w);
       for(i=0;i<=wlen-slen;i++){
        for (j=0; j<slen; j++) {
             if (w[i+j] != s[j]) {
                break;
            }
		}
if (j == slen) {
	break;
}
        }
      if (j == slen) {
           for(k=0;k<i;k++){
            my_printf("%c",w[k]);
             }
           my_printf("%s",v);
         if(w[i+slen]!=0){
          for(k=i+slen;k<wlen;k++){     
        my_printf("%c",w[k]);
          }
           }
           
            }
     else if(i==wlen-slen+1)
     my_printf("%s",w);
     return 0;
}
