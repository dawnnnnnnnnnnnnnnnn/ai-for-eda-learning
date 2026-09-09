#include <stdio.h>

int main(){
    int user_type = 2;
    float price = 180;
    float total;
    if (user_type == 1){
        if(price > 100){
            total = price * 0.95;
        }
        else{
            total = price;
        }

    }
    else if (user_type ==2){
        if(price > 200){
            total = price *0.9;
        }
        else{
            total = price*0.97;
        }
    }
    else{
        printf("用户类型错误\n");
    }
    printf("最终价格为：%.2f\n", total);
    return 0;
}