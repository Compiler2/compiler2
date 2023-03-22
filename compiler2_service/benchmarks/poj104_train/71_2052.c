#include <header.h>

int main_bench()
{
        int k,d,n,y[200],m1[200],m2[200],i,e,m[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
        my_scanf("%d",&n);
        for(i=0;i<n;i++){
                my_scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
        
        if(y[i]%100!=0&&y[i]%4==0||y[i]%400==0) m[2]=29;
        else m[2]=28;
        if(m1[i]>m2[i]){ e=m2[i];m2[i]=m1[i];m1[i]=e;}d=0;
        for(k=m1[i];k<m2[i];k++){
                 d+=m[k];
        }
        if(d%7==0) my_printf("YES\n");
        else       my_printf("NO\n");
        }
        return 0;
}