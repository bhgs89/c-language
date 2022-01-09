#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// 2진수 -> 10진수 계산기
double binary_to_decimal_calculator(bool printer, int pos[], int neg[], int pos_size, int neg_size) {
    if (printer) {
        printf("=====================================\n");
        printf("Binary Calculator\n");
    }
    
    // Positive Binary
    if (printer) {
        printf("binary: ");
    }
    int binary_positive_size = pos_size / 4;
    int binary_negative_size = neg_size / 4;

    int binary_postive_number = 0;
    if (binary_positive_size > 0) {
        for (int i = 0; i < binary_positive_size; i++) {
            if (printer) {
                printf("%d", pos[i]);
            }
            
            if (pos[i] > 0) {
                binary_postive_number += pow(2, binary_positive_size - (i + 1));
            }
        }
    }
    
    if (printer) {
        if (binary_positive_size > 0 && binary_negative_size > 0) {
            printf(".");
        } else if (binary_positive_size == 0 && binary_negative_size > 0) {
            printf("0.");
        }
    }

    double binary_negative_number = 0;
    for (int i = 1; i <= binary_negative_size; i++) {
        if (printer) {
            printf("%d", neg[i - 1]);
        }
        if (neg[i - 1] > 0) {
            binary_negative_number += pow(2, -i);
        }
    }

    if (printer) {
        printf("\n");
    }
    
    double binary_result = 0.0;
    if (binary_positive_size == 0 && binary_negative_size == 0) {
        if (printer) {
            printf("Result: none/n");
        }
    } else {
        binary_result = binary_postive_number + binary_negative_number;
        if (printer) {
            printf("Result: %.52lg\n", binary_result);
        }
    }
    
    if (printer) {
        printf("=====================================\n");
        printf("\n");
        printf("\n");
    }
    
    return binary_result;
}

// 지수 계산기
double exp_calculator(bool printer, int base, int exp) {
    if (printer) {
        printf("=====================================\n");
        printf("지수 Calculator\n");
    }
    
    double result = pow(base, exp);
    
    if (printer) {
        printf("%d ^ %d = %lg\n", base, exp, result);
        printf("=====================================\n");
        printf("\n");
        printf("\n");
    }
    
    return result;
}

// Float type bit 계산기
double float_calculator(bool printer, int sign_bit, int exp_bit[], int real_bit[], int exp_size, int real_size) {
    if (printer) {
        printf("=====================================\n");
        printf("Float Bits Calculator\n");
        printf("sign bit: %d\n", sign_bit);
    }
    
    // 지수부 계산
    if (printer) {
        printf("지수부 bits: ");
    }
    int float_exp_size = exp_size / 4;
    int float_exp_number = 0;
    for (int i = 0; i < float_exp_size; i++) {
        if (printer) {
            printf("%d", exp_bit[i]);
        }
        if (exp_bit[i] > 0) {
            float_exp_number += pow(2, float_exp_size - (i + 1));
        }
    }
    
    if (printer) {
        printf("\n");
    }
    
    // 가수부 계산
    if (printer) {
        printf("가수부 bits: ");
    }
    int float_real_size = real_size / 4;
    float float_real_number = 1.0;
    for (int i = 1; i <= float_real_size; i++) {
        if (printer) {
            printf("%d", real_bit[i - 1]);
        }
        if (real_bit[i - 1] > 0) {
            float_real_number += pow(2, -i);
        }
    }
    
    if (printer) {
        printf("\n");
        printf("-------------------\n");
    }
        
    if (printer) {
        if (sign_bit == 1) {
            printf("sign: -\n");
        } else {
            printf("sign: +\n");
        }
        printf("지수부 값(bias 기준): %d\n", float_exp_number - 127);
        printf("가수부 값: %.23g\n", float_real_number);
        printf("-------------------\n");
    }
    
    float float_result = 0.0;
    if (float_exp_number == 0 && float_real_number == 0) {
        if (printer) {
            printf("실제 값: 0 (Denormalized)\n");
        }
    } else {
        float_result = float_real_number * pow(2, (float_exp_number - 127));
        if (sign_bit == 1) {
            printf("실제 값: -(%f)(2 ^ %d)= -%.23g\n", float_real_number, (float_exp_number - 127), float_result);
        } else {
            printf("실제 값: %.23f\n", float_result);
        }
    }
    
    if (sign_bit == 1) {
        float_result *= -1;
    }
    
    if (printer) {
        printf("=====================================\n");
        printf("\n");
        printf("\n");
    }
    
    return float_result;
}

int main(void) {
    // float bit 계산기
    int float_sign_bit = 1;
//    int float_exp_bits[] = {1,1,1,1, 1,1,1,0};
//    int float_exp_bits[] = {0,0,0,0, 0,0,0,0};
    int float_exp_bits[] = {0,1,1,1, 1,0,1,1};
//    int float_real_bits[] = {1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
//    int float_real_bits[] = {0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
    int float_real_bits[] = {1,0,0, 1,1,0,0, 1,1,0,0, 1,1,0,0, 1,1,0,0, 1,1,0,1};
    double float_result = float_calculator(true, float_sign_bit, float_exp_bits, float_real_bits, sizeof(float_exp_bits), sizeof(float_real_bits));
    
    // Double bit 계산기
    int double_bits_calculator = 0;
    int double_sign_bit = 1;
    int double_exp_bits[] = {0,0,0, 0,0,0,0, 0,0,0,0};
    int double_real_bits[] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
    
    // 지수 계산기
    int exp_base = 2;
    int exp_exp = -2;
    double exp_cal = exp_calculator(true, exp_base, exp_exp);
    
    // 2진수 -> 10진수 계산기
    // Positive
    int bi_pos[] = {1,1,1,1, 1,1,1,0};
//    int bi_pos[] = {0,0,0,0, 0,0,0,0};
//    int bi_pos[] = {1,0,1,0};
//    int bi_pos[] = {1};
//    int bi_pos[] = {};
    // Negative
//    int bi_neg[] = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
//    int bi_neg[] = {0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,1};
//    int bi_neg[] = {0,0,1,1,1};
    int bi_neg[] = {};
    double binary_cal = binary_to_decimal_calculator(true, bi_pos, bi_neg, sizeof(bi_pos), sizeof(bi_neg));
    
    
    
    
    // Double type bit 계산기
        if (double_bits_calculator == 1) {
            printf("=====================================\n");
            printf("Double Bits Calculator\n");
            printf("sign bit: %d\n", double_sign_bit);
            
            // 지수부 계산
            printf("지수부 bits: ");
            int double_exp_size = sizeof(double_exp_bits) / 4;
            int double_exp_number = 0;
            for (int i = 0; i < double_exp_size; i++) {
                printf("%d", double_exp_bits[i]);
                if (double_exp_bits[i] > 0) {
                    double_exp_number += pow(2, i);
                }
            }
            printf("\n");
            
            // 가수부 계산
            printf("가수부 bits: ");
            int double_real_size = sizeof(double_real_bits) / 4;
            double double_real_number = 1.0;
            for (int i = 0; i < double_real_size; i++) {
                printf("%d", double_real_bits[i]);
                if (double_real_bits[i] > 0) {
                    double_real_number += pow(2, -i);
                }
            }
            printf("\n");
            printf("-------------------\n");
                    
            // 부호부 계산
            if (double_sign_bit == 1) {
                printf("sign: -\n");
            } else {
                printf("sign: +\n");
            }
            printf("지수부 값: %d\n", double_exp_number);
            printf("가수부 값: %.52lg\n", double_real_number);
            printf("-------------------\n");

            if (double_exp_number == 0 && double_real_number == 0) {
                printf("실제 값: 0 (Denormalized)\n");
            } else {
                double double_result = double_real_number * pow(2, double_exp_number);
                if (double_sign_bit == 1) {
                    printf("실제 값: -%.52lf\n", double_result);
                } else {
                    printf("실제 값: %.52lf\n", double_result);
                }
            }
            printf("=====================================\n");
            printf("\n");
            printf("\n");
        }
    
    return 0;
}
