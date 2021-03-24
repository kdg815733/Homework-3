#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

int main(void){
    for(i = 0; i < MAX_SIZE; i++) input[i] = i; //100크기 배열에 0~99까지 순차적으로 값을 넣음

    printf("[------[2017068005]--[강덕규]--------]\n");
    
    printf("address of input = %p\n", input); //input 배열의 시작주소
    
    answer = sum(input, MAX_SIZE);
    printf("The sum is : %f\n",answer); 
    
    return 0;
}

float sum(float list[],int n){
    printf("value of list = %p\n",list);       //전달받은 인자의 값은 실제 input 배열의 주소와 같다.
    printf("address of list = %p\n\n,",&list); //전달받은 인자의 주소는 input 배열의 주소와 다르다 => 같은 변수가 아님

    int i;
    float tempsum = 0;
    for(i = 0; i < n ;i++) tempsum +=list[i];    //전달받은 인자로 input 배열 전부에 접근가능해 연산이 가능

    return tempsum;
}