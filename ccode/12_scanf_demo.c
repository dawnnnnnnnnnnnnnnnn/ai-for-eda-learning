#include <stdio.h>
#include <stdlib.h>

int main(){
    int category ;
    float price;

    /* 让 Windows 控制台按 UTF-8 显示，避免中文乱码 */
    system("chcp 65001 > nul");
    scanf("%d %f",&category,&price);
    switch(category){
        case 1:
            if(price<500){
                printf("电子产品价格较低，无优惠\n");
            }
            else if(price>=500 && price <1000){
                printf("电子产品可享受5%的优惠");
            }
            else if(price >= 1000){
                printf("电子产品可享受10%的优惠");
            }
            break;
        case 2:
            if(price<200){
                printf("服装价格较低，无优惠\n");
            }
            else if(price>=200 && price <500){
                printf("服装可享受8%的优惠");
            }
            else if(price >= 500){
                printf("服装可享受15%的优惠");
            }
            break;
    }
    return 0;
}