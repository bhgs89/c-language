#include <stdio.h>
// 다차원 배열 (Multi Array)
//  - N X M Elements

// 1차원 배열
// [][][][][][][][][][]

// 2차원 배열
// [][][][][][][][][][]
// [][][][][][][][][][]
// [][][][][][][][][][]
// [][][][][][][][][][]
// [][][][][][][][][][]

int main(int argc, const char * argv[]) {
    // 구구단을 이용하여 2차원 배열 출력하기
    //  i = row, j = column
    int i, j;
    int gugudan[10][10];
    for (i = 1; i <= 9; i++) {
        printf("\n[ %d단 ]\n\n", i);
        for (j = 1; j <= 9; j++) {
            gugudan[i][j] = i * j;
            printf("%d X %d = %d\n", i, j, gugudan[i][j]);
        }
    }
    
    return 0;
}
