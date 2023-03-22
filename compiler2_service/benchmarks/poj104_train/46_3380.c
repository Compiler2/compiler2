#define NUM_ITER 587

#include <header.h>

int main_bench(){
    int h, l;
    my_scanf("%d %d",&h, &l);
    int sz[h][l];
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            my_scanf("%d",&sz[i][j]);
        }
    }
    int qs_h=0, qs_l=0;
    int zz_h=h-1, zz_l=l-1;
    while(qs_h<=zz_h&&qs_l<=zz_l){
        if(qs_h!=zz_h&&qs_l!=zz_l){
            for(int i=qs_l;i<=zz_l;i++){
                my_printf("%d\n",sz[qs_h][i]);
            }
            for(int i=qs_h+1;i<=zz_h;i++){
                my_printf("%d\n",sz[i][zz_l]);
            }
            for(int i=zz_l-1;i>=qs_l;i--){
                my_printf("%d\n",sz[zz_h][i]);
            }
            for(int i=zz_h-1;i>=qs_h+1;i--){
                my_printf("%d\n",sz[i][qs_l]);
            }
        }
        if(qs_h==zz_h&&qs_l!=zz_l){
            if(h%2==1){
                for(int i=qs_l;i<=zz_l;i++){
                    my_printf("%d\n",sz[qs_h][i]);
                }
            }
            if(h%2==0){
                for(int i=zz_l;i>=qs_l;i--){
                    my_printf("%d\n",sz[qs_h][i]);
                }
            }
        }
        if(qs_h!=zz_h&&qs_l==zz_l){
            for(int i=qs_h;i<=zz_h;i++){
                my_printf("%d\n",sz[i][qs_l]);
            }
        }
        if(qs_h==zz_h&&qs_l==zz_l){
            my_printf("%d\n",sz[qs_h][zz_h]);
        }
        qs_h++;
        qs_l++;
        zz_l--;
        zz_h--;
    }
    return 0;
}
