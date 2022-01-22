#include <stdio.h>
// Pointer
// - 특정 데이터가 저장된 Memory의 주소를 저장하는 변수
// - Pointer & Null Pointer
//     Pointer: 어떤 Data를 가리키고 있는 Pointer
//     Null Pointer: 아무것도 가리키고 있지 않은 Pointer
// - *, &
//     &변수 : 변수의 주소
//    *변수 : 변수의 주소를 가리키는 변수
//    모든 변수는 Memory에 할당된다
//    일반 변수의 Memory에는 변수의 Memory 주소와 해당 Memory 주소에 저장할 실제 Data가 존재한다
//    포인터 변수의 Memory에는 변수의 Memory 주소와 해당 Memory 주소에 저장할 특정한 일반 변수 또는 포인터 변수의 Memory 주소 Data가 존재한다
    
// 두 변수의 값을 서로 변환하기
void swap(int *x, int *y) {
    int temp;
    temp = *x;    // temp에 포인터 x가 가리키고 있는 변수의 Memory 주소를 할당한다
    *x = *y;    // x가 가리키고 있는 Memory 주소를 y가 가리키고 있는 Memory 주소로 변경한다
    *y = temp;    // y가 가리키고 있는 Memory 주소를 temp의 값으로 변경한다
}

int main(int argc, const char * argv[]) {
    // 두 변수의 값을 서로 변환하기
    // int x = 1;
    // int y = 2;
    // swap(&x, &y);
    // printf("x = %d\ny = %d\n", x, y);
    
    // 포인터 변수의 값을 바꾸어 보기
    int i = 10;
    int *p;
    p = &i;        // 포인터 p의 값은 i의 주소
    printf("i = %d\n", i);
    *p = 20;    // 포인터 p가 가리키는 주소의 값은 20
    printf("i = %d\n", i);
    
    return 0;
}
