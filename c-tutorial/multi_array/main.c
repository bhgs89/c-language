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
    //    int i, j;
    //    int gugudan[10][10];
    //    for (i = 1; i <= 9; i++) {
    //        printf("\n[ %d단 ]\n\n", i);
    //        for (j = 1; j <= 9; j++) {
    //            gugudan[i][j] = i * j;
    //            printf("%d X %d = %d\n", i, j, gugudan[i][j]);
    //        }
    //    }
    
    // 학생 점수의 총 합
    int score[5][2];
    int total[2] = { 0, };
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("%d번 학생의 수학, 영어 점수 : ", i + 1);
        scanf("%d %d", &score[i][0], &score[i][1]);
    }
    
    for (i = 0; i < 5; i++) {
        total[0] += score[i][0];
        total[1] += score[i][1];
    }
    
    printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
    printf("5명의 영어 점수 합계 : %d\n", total[1]);
    return 0;
}
