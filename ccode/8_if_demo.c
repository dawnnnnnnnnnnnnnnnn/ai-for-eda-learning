#include <stdio.h>

// int main() {
//     int a = 2;
//     int b = 8;
//     if (a > b){
//         printf("a与b的差值为：%d\n", a-b);
//     }
//     else{
//         printf("a与b的差值为：%d\n", b-a);
//     }
//     return 0;

// } need improvement
int main(){
    int a = 2;
    int b = 8;
    int result;
    if (a>b){
        result = a-b;
    }
    else{
        result= b-a;
    }
    printf("a与b的差值为：%d\n", result);
    return 0;   
}