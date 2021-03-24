#include <stdio.h>
#include <stdlib.h>

int main(void){
    int **x;

    printf("[------[2017068005]--[강덕규]--------]\n");

    printf("size of (x) = %lu\n",sizeof(x));      
    printf("size of (*x) = %lu\n",sizeof(*x));    //x,*x는 주소를 저장하는데 32bit환경이기에 크기가 4
    printf("size of (**x) = %lu\n",sizeof(**x)); //int값을 저장하기 때문에 크기가 4

    return 0;
}