#include<stdio.h>

struct student{
    char lastName[13];
    int studentId;
    short grade;
};

int main(void){
    
    struct student pst;

    printf("[------[2017068005]--[강덕규]--------]\n");
    
    printf("size of student = %ld\n",sizeof(struct student));  //구조체의 크기는 내부 변수크기들의 합이여야 하는데 char * 13 + int + shart = 13+ 4 + 2 = 19로 안맞다.
    printf("size of int = %ld\n",sizeof(int));
    printf("size of short = %ld\n",sizeof(short));
    printf("address of lastName = %p\n",&pst.lastName); 
    printf("address of studentid = %p\n",&pst.studentId);
    printf("address of grade = %p\n",&pst.grade);  // padding으로 인해 차지하는 크기는 16(+3 padding) + 4 + 4(+2 padding) 으로 24를 차지한다.
    
    return 0;
}