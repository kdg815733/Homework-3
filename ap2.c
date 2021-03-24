#include <stdio.h>
#include <stdlib.h>

int main(void){
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));

    printf("[------[2017068005]--[강덕규]--------]\n");
    
    printf("address of list \t=%p\n", list);
    printf("address of list[0] \t=%p\n", &list[0]); //배열 list의 값 == list[0]의 주소 list는 해당배열의 첫번째 값이 있는 공간의 주소를 가리킨다.
    printf("address of list + 0 \t=%p\n", list + 0);
    printf("address of list + 1 \t=%p\n", list + 1);
    printf("address of list + 2 \t=%p\n", list + 2); // 덧셈연산으로 배열 값들의 주소를 찾아갈 수 있다.(+ 숫자 는 실제 값이 아닌 다음 주소를 가리키는 값)
    printf("address of list + 3 \t=%p\n", list + 3);
    printf("address of list + 4 \t=%p\n", list + 4);
    printf("address of list[4] \t=%p\n", &list[4]);  // list + 4 == &list[4] 로 마지막 주소값을 가리킨다.

    free(plist[0]);
    
    return 0;
}