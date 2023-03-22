#include <header.h>

int main_bench(){
    int c,d,e,count=0,i;
    double result,n;
    my_scanf("%lf",&n);
    char a[500],b[500];
    my_scanf("%s%s",a,b);
    c=strlen(a);
    d=strlen(b);
    if(c!=d)
    my_printf("error");
    else{
        for(i=0;i<c;i++){
            if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
                my_printf("error");
                result=-1;
                break;
            }
            else{

            if(a[i]==b[i])
            count++;
            }
        }
        if(result!=-1){

        result=(double)count/c;
        if(result>n)
           my_printf("yes");
        else
           my_printf("no");
        }
    }


    return 0;
}
