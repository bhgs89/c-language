#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체 동적 메모리 할당
struct Book {
    int number;
    char title[100];
};

void showBook(struct Book *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
    }
}

int main(int argc, const char * argv[]) {
    // 구조체 동적 메모리 할당
    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book));
    if (p == NULL) {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }
    // 동적 메모리가 할당된 구조체의 속성을 사용할 때는 -> 를 사용해준다
    p->number = 1;
    strcpy(p->title, "C Programming");
    (p + 1)->number = 2;
    strcpy((p + 1)->title, "Data Structure");
    showBook(p, 2);
    free(p);
    
    return 0;
}
