#include <stdio.h>

struct student1{
    char lastName;
    int studentId;             //이 형태로 구조체를 만들면 선언할때 struct를 붙여 써야한다.
    char grade;
};

typedef struct{
    char lastName;
    int studentId;           //int char처럼 student2만 쓰면 된다.
    char grade;
} student2;

int main(void){

    struct student1 st1 = {'A',100,'A'};
    printf("[------[2017068005]--[강덕규]--------]\n");

    printf("st1.lastNAme = %c\n",st1.lastName);
    printf("st1.studentId = %d\n",st1.studentId);           //할당한 값을 출력하는 방법.
    printf("st1.grade = %c\n",st1.grade);

    student2 st2 = {'B',200,'B'};

    printf("\nst2.lastNAme = %c\n",st2.lastName);
    printf("st2.studentId = %d\n",st2.studentId);        //넣은값 확인
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;
    st3 = st2;

    printf("\nst3.lastNAme = %c\n",st3.lastName);
    printf("st3.studentId = %d\n",st3.studentId);       //같은 구조체를 =연산하면 같은 값을 가리킨다.
    printf("st3.grade = %c\n",st3.grade);

    /*
    if(st3 == st2) printf("equal\n");              //구조체는 비교연산을 할 수 없다.
    else printf("not equal\n");
    */

    return 0;
}
