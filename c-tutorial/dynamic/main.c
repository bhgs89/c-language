#include <stdio.h>
#include <stdlib.h>

// 동적 메모리
//  - Dynamic memory allocation
//  - 프로그램이 실행하는 도중에 동적으로 메모리를 할당 받는 것
//  - 필요한 만큼 할당 받고 끝나면 메모리 반납
//  - malloc() 함수 사용 - stdlib.h

int main(void) {
    // 동적 메모리 기초 예제
        // // 포인터 변수: Address 저장
        // int *p1;    // Pointer Integer

        // // malloc = 메모리를 할당해라
        // // Parameter만큼을 할당해라
        // // int pointer 형태로 형전환 - pointer형태로 변환하는 이유는 할당된 Memory 주소를 return하기 위해
        // // pi 변수에 할당된 메모리 주소를 저장한다
        // pi = (int *)malloc(sizeof(int));
            
        // if (pi == NULL) {
        //     printf("동적 메모리 할당에 실패했습니다.\n");
        //     exit(1);
        // }
        // // pi 변수가 저장하는 메모리 주소가 가리키는 값은 100
        // *pi = 100;
        // printf("%d\n", *pi);
        // // 동적 메모리 사용후, 메모리 반환
        // free(pi);

    // 동적 메모리로 알파벳 출력하기
        // char *pc = NULL;
        // int i = 0;
        // pc = (char *)malloc(100 * sizeof(char));
        // if (pc == NULL) {
        //     printf("동적 메모리 할당에 실패했습니다.\n");
        //     exit(1);
        // }
        // // pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입한다
        // for (i = 0; i < 26; i++) {
        //     *(pc + 1) = 'a' + i;
        // }
        // // ASCII Code 0은 NULL을 의미
        // *(pc + i) = 0;
        // printf("%s\n", pc);
        // free(pc);

    // 동적 메모리로 정수 5개를 처리하기
        int * pi, i;
        pi = (int *)malloc(5 * sizeof(int));
        if (pi == NULL) {
            printf("동적 메모리 할당에 실패했습니다.\n");;
        }
        pi[0] = 100;
        pi[1] = 200;
        pi[2] = 300;
        pi[3] = 400;
        pi[4] = 500;
        for (i = 0; i < 5; i++) {
            printf("%d\n", *(pi + i));
        }
        free(pi);

    return 0;
}
