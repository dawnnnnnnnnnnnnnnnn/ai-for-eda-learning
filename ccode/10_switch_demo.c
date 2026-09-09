#include <stdio.h>

int main(){
    int category = 2;
    double price = 299.9;
    double total;
    switch(category){
        case 1:
            if(price < 500){
                printf("价格小于500，无优惠\n");
            }
            else if(price >= 500 && price <1000){
                printf("电子产品享受5%%优惠\n");
                total = price * 0.95;
            }
            else if(price >= 1000){
                printf("电子产品享受10%%优惠\n");
                total = price * 0.9;
            }
            break;
        case 2:
            if(price < 200){
                printf("价格小于200，无优惠\n");
            }
            else if(price >= 200 && price <500){
                printf("服装享受8%%优惠\n");
                total = price * 0.92;
            }
            else if(price >= 500){
                printf("服装享受15%%优惠\n");
                total = price * 0.85;
            }
            break;
            default:
                printf("商品类别错误\n");
                break;
    }
    printf("最终价格为：%.2lf\n", total);
    return 0;
}