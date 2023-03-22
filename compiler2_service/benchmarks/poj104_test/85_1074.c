#include <header.h>

int main_bench()
{ 
    int i,l,n;
    my_scanf("%d",&n);
    char c[2000],*p;
    for(i=0;i<n;i++){
        my_scanf("%s",c);
        l=strlen(c);
        p=c;
        if((*p>64&&*p<91)||(*p==95)||(*p>96&&*p<123)){}
        else {my_printf("no\n");continue;}
        for(p=c+1;p<c+l;p++){
            if((*p>64&&*p<91)||(*p==95)||(*p>96&&*p<123)||(*p>47&&*p<58))
                       {if(p==c+l-1){my_printf("yes\n");}  }
            else {my_printf("no\n");break;}
         }
    }                         
	return 0;
}