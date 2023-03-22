#include <header.h>

int main_bench(){
    int n,i,j,a=0;
    char s[21];
    my_scanf ("%d",&n);
    for (i=0;i<n;i++){
        int t1=1,t2=1;
        my_scanf ("%s",s);
        if (s[0]=='_'||(s[0]<='Z'&&s[0]>='A')||(s[0]<='z'&&s[0]>='a')){
            t1=1;
        }else {
            t1=0;
        }
        for (j=1;s[j];j++){
            if (s[j]=='_'||(s[j]<='Z'&&s[j]>='A')||(s[j]<='z'&&s[j]>='a')||(s[j]>='0'&&s[j]<='9')){
                a++;
            }else {
                t2=0;
            }
        }
        if (t1==1&&t2==1){
            my_printf ("yes\n");
        }else {
            my_printf ("no\n");
        }
    }
    return 0;
}