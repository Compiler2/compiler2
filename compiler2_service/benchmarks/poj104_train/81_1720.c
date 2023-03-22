#define NUM_ITER 233784

#include <header.h>

int main_bench(){
    int A[5][5],m,n,row,list,i;
    row=0;
    while(row<5){
        list=0;
        while(list<5){
            my_scanf("%d",&A[row][list]);
            list++;
        }
        row++;
    }
    my_scanf("%d%d",&m,&n);
    if(m<0||n<0||m>4||n>4){
        my_printf("error");
    }
    else{
        i=0;
        while(i<5){
            row=A[m][i];
            A[m][i]=A[n][i];
            A[n][i]=row;
            i++;
        }
        row=0;
        while(row<5){
            list=0;
            while(list<5){
                if(list==4){
                    my_printf("%d\n",A[row][list]);
                }
                else{
                my_printf("%d ",A[row][list]);
                }
                list++;
            }
            row++;
        }
    }
    return 0;
}

