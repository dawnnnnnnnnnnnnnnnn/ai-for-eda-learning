#include <stdio.h>

int main(){
    int int_1=80;
    printf("int_1: %d\n", int_1);
    char char_1='A';
    printf("char_1: %c,%d", char_1, char_1);
    char char_2=int_1;
    printf("\nchar_2: %c\n", char_2);
    printf("%zu\n", sizeof(char));
    return 0;
}