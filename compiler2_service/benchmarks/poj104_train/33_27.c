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
        for(p=c;p<c+l;p++){
             if(*p=='A'){my_printf("T");}
             if(*p=='T'){my_printf("A");}
             if(*p=='G'){my_printf("C");}
             if(*p=='C'){my_printf("G");}
        }
        my_printf("\n");
    }
	return 0;
}