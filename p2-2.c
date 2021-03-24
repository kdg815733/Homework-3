#include <stdio.h>

void print1(int *ptr, int rows);

int main(void){
    int one[] = {0,1,2,3,4};

    printf("[------[2017068005]--[강덕규]--------]\n");

    printf("one     = %p\n",one);
    printf("&one    = %p\n",&one);  //배열명은 배열의 첫번째 주소를 가리킨다.
    printf("&one[0] = %p\n",&one[0]);
    printf("\n");

    print1(&one[0],5);

    return 0;
}

void print1(int *ptr,int rows){
    int i;
    printf("address \t Contents\n");
    for (i = 0; i < rows; i++) printf("%p \t %5d\n", ptr + i , *(ptr + i)); //포인터로 배열의 접근이 자유롭다.
    printf("\n");
}