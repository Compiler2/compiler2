#define NUM_ITER 1737

#include <header.h>

int main_bench(){
    int n,y[200],m1[200],m2[200],i,j,k,day1[200],day2[200],cha[200];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d%d",&y[i],&m1[i],&m2[i]);
    }
    for(i=0;i<n;i++){
        day1[i]=1;
        day2[i]=1;
        if((y[i]%4==0&&y[i]%100!=0)||(y[i]%400==0)){
            for(j=1;j<m1[i];j++){
                if(j==1||j==3||j==5||j==7||j==8||j==10){
                    day1[i]=day1[i]+31;
                }
                else if(j==4||j==6||j==9||j==11){
                    day1[i]=day1[i]+30;
                }
                else if(j==2){
                    day1[i]=day1[i]+29;
                }
            }
            for(j=1;j<m2[i];j++){
                if(j==1||j==3||j==5||j==7||j==8||j==10){
                    day2[i]=day2[i]+31;
                }
                else if(j==4||j==6||j==9||j==11){
                    day2[i]=day2[i]+30;
                }
                else if(j==2){
                    day2[i]=day2[i]+29;
                }
            }
        }
        else{
            for(j=1;j<m1[i];j++){
                if(j==1||j==3||j==5||j==7||j==8||j==10){
                    day1[i]=day1[i]+31;
                }
                else if(j==4||j==6||j==9||j==11){
                    day1[i]=day1[i]+30;
                }
                else if(j==2){
                    day1[i]=day1[i]+28;
                }
            }
            for(j=1;j<m2[i];j++){
                if(j==1||j==3||j==5||j==7||j==8||j==10){
                    day2[i]=day2[i]+31;
                }
                else if(j==4||j==6||j==9||j==11){
                    day2[i]=day2[i]+30;
                }
                else if(j==2){
                    day2[i]=day2[i]+28;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        cha[i]=abs(day1[i]-day2[i]);
        if(cha[i]%7==0){
            my_printf("YES\n");
        }
        else
            my_printf("NO\n");
    }
    return 0;
}