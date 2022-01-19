#include <stdio.h>
// 반복함수
//  - while 또는 for 문법을 이용해서 반복적으로 사용하는 함수
// 숫자 피라미드 출력
//int print(int a) {
//    int i, j;
//    for (i = 0; i < a; i++) {
//        for (j = 0; j <= i; j++) {
//            printf("%d ", j + 1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


// 재귀함수
//  - 자신의 함수 내부에서 자기 자신을 호출함으로써 재귀적으로 사용하는 함수
// 특정한 문자열을 재귀함수로 반복 출력
//void print(int count) {
//    if (count == 0) {
//        return;
//    } else {
//        printf("문자열을 출력합니다.\n");
//        print(count - 1);
//    }
//}
// 조합 함수
//  - 서로 다른 n개의 물건에서 순서를 생각하지 않고 r개를 택할 때, 이것은 n개에서 r개를 택하는 조합이라고 한다 nCr
//  - nCr은 r이 0이거나 n이라면 1이며, nCr(n - 1, r - 1) + nCr(n - 1, r)과 같다
int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main(int argc, const char * argv[]) {
    // 숫자 피라미드 출력
    //    int a;
    //    scanf("%d", &a);
    //    print(a);
    
    // 특정한 문자열을 재귀함수로 반복 출력
    //    int number;
    //    printf("문자열을 몇 개 출력할까요? ");
    //    scanf("%d", &number);
    //    print(number);
    
    // 조합 함수
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", nCr(n, r));
    
    return 0;
}
