#include<stdio.h>
#include<stdlib.h>

int main(void){
    int list[5];
    int *plist[5] = {NULL,};

    plist[0] = (int *) malloc (sizeof(int));

    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;

    printf("[------[2017068005]--[강덕규]--------]\n");

    printf("value of list[0] = %d\n",list[0]);
    printf("address of list[0]\t=%p\n",&list[0]);
    printf("value of list\t=%p\n",list);           //&list[0] == list == &list 배열은 첫번째 값이 있는 곳의 주소를 가리킨다.
    printf("address of list(&list)\t=%p\n",&list);

    printf("-----------------------------------\n\n");
    printf("value of list[1] = %d\n",list[1]);
    printf("address of list[1]\t=%p\n",&list[1]);  
    printf("value of *(list+1)\t=%d\n",*(list+1)); // list + 1 은 리스트 주소에 배열 데이터타입의 크기만큼 연산한것 int이므로 주소값에 + 4했다. 
    printf("address of list+1\t=%p\n",list+1);

    printf("-----------------------------------\n\n");

    printf("value of *plist[0] = %d\n",*plist[0]); //plist[0]의값(주소) 가 가르키는값 == 200
    printf("&plist[0]\t=%p\n",&plist[0]);
    printf("&plist\t=%p\n",&plist);  // plist 포인트리스트가 있는 주소
    printf("plist\t=%p\n",plist);
    printf("plist[0]\t=%p\n",plist[0]); // 위의 plist[0] = (int *) malloc (sizeof(int));의 결과로 malloc해서 할당받은 주소가 들어감.
    printf("plist[1]\t=%p\n",plist[1]); // 1~4까지는 할당받은 주소가없어서 null값
    printf("plist[2]\t=%p\n",plist[2]);
    printf("plist[3]\t=%p\n",plist[3]);
    printf("plist[4]\t=%p\n",plist[4]);
    
    free(plist[0]);
}