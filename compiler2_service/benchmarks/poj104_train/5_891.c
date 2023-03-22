#include <header.h>

int main_bench(){
    char a[510],b[510];
    int i,c;
    double bl,k;
    my_scanf("%lf",&k);
    my_scanf("%s",a);
    my_scanf("%s",b);
    c=0;
    int len1=strlen(a);
    int len2=strlen(b);
    if(len1!=len2){my_printf("error");}
    else{
        for(i=0;i<len1;i++){
            if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){my_printf("error");
            return 0;
            }else{if(a[i]==b[i])c++;}
        }bl=1.0*c/len1;
        if(bl>k){my_printf("yes");
        }else{my_printf("no");}
    }return 0;
}