#include <stdio.h>
//矩陣數字顯示https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30746
int main(){
    int one[5][5] = {0};
    one[0][4] = 1;
    one[1][4] = 1;
    one[2][4] = 1;
    one[3][4] = 1;
    one[4][4] = 1;
    int two[5][5] = {0};
    two[0][0] = 1;
    two[0][1] = 1;
    two[0][2] = 1;
    two[0][3] = 1;
    two[0][4] = 1;
    two[1][4] = 1;
    two[2][0] = 1;
    two[2][1] = 1;
    two[2][2] = 1;
    two[2][3] = 1;
    two[2][4] = 1;
    two[3][0] = 1;
    two[4][0] = 1;
    two[4][1] = 1;
    two[4][2] = 1;
    two[4][3] = 1;
    two[4][4] = 1;
    int three[5][5] = {0};
    three[0][0] = 1;
    three[0][1] = 1;
    three[0][2] = 1;
    three[0][3] = 1;
    three[0][4] = 1;
    three[1][4] = 1;
    three[2][0] = 1;
    three[2][1] = 1;
    three[2][2] = 1;
    three[2][3] = 1;
    three[2][4] = 1;
    three[3][4] = 1;
    three[4][0] = 1;
    three[4][1] = 1;
    three[4][2] = 1;
    three[4][3] = 1;
    three[4][4] = 1;
    int four[5][5] = {0};
    four[0][0] = 1;
    four[0][4] = 1;
    four[1][0] = 1;
    four[1][4] = 1;
    four[2][0] = 1;
    four[2][1] = 1;
    four[2][2] = 1;
    four[2][3] = 1;
    four[2][4] = 1;
    four[3][4] = 1;
    four[4][4] = 1;
    int five[5][5] = {0};
    five[0][0] = 1;
    five[0][1] = 1;
    five[0][2] = 1;
    five[0][3] = 1;
    five[0][4] = 1;
    five[1][0] = 1;
    five[2][0] = 1;
    five[2][1] = 1;
    five[2][2] = 1;
    five[2][3] = 1;
    five[2][4] = 1;
    five[3][4] = 1;
    five[4][0] = 1;
    five[4][1] = 1;
    five[4][2] = 1;
    five[4][3] = 1;
    five[4][4] = 1;
    int six[5][5] ={0};
    six[0][0] = 1;
    six[0][1] = 1;
    six[0][2] = 1;
    six[0][3] = 1;
    six[0][4] = 1;
    six[1][0] = 1;
    six[2][0] = 1;
    six[2][1] = 1;
    six[2][2] = 1;
    six[2][3] = 1;
    six[2][4] = 1;
    six[3][0] = 1;
    six[3][4] = 1;
    six[4][0] = 1;
    six[4][1] = 1;
    six[4][2] = 1;
    six[4][3] = 1;
    six[4][4] = 1;
    int seven[5][5] = {0};
    seven[0][0] = 1;
    seven[0][1] = 1;
    seven[0][2] = 1;
    seven[0][3] = 1;
    seven[0][4] = 1;
    seven[1][4] = 1;
    seven[2][4] = 1;
    seven[3][4] = 1;
    seven[4][4] = 1;
    int eight[5][5] = {0};
    eight[0][0] = 1;
    eight[0][1] = 1;
    eight[0][2] = 1;
    eight[0][3] = 1;
    eight[0][4] = 1;
    eight[1][0] = 1;
    eight[1][4] = 1;
    eight[2][0] = 1;
    eight[2][1] = 1;
    eight[2][2] = 1;
    eight[2][3] = 1;
    eight[2][4] = 1;
    eight[3][0] = 1;
    eight[3][4] = 1;
    eight[4][0] = 1;
    eight[4][1] = 1;
    eight[4][2] = 1;
    eight[4][3] = 1;
    eight[4][4] = 1;
    int nine[5][5] = {0};
    nine[0][0] = 1;
    nine[0][1] = 1;
    nine[0][2] = 1;
    nine[0][3] = 1;
    nine[0][4] = 1;
    nine[1][0] = 1;
    nine[1][4] = 1;
    nine[2][0] = 1;
    nine[2][1] = 1;
    nine[2][2] = 1;
    nine[2][3] = 1;
    nine[2][4] = 1;
    nine[3][4] = 1;
    nine[4][4] = 1;
    int zero[5][5] = {0};
    zero[0][0] = 1;
    zero[0][1] = 1;
    zero[0][2] = 1;
    zero[0][3] = 1;
    zero[0][4] = 1;
    zero[1][0] = 1;
    zero[1][4] = 1;
    zero[2][0] = 1;
    zero[2][4] = 1;
    zero[3][0] = 1;
    zero[3][4] = 1;
    zero[4][0] = 1;
    zero[4][1] = 1;
    zero[4][2] = 1;
    zero[4][3] = 1;
    zero[4][4] = 1;
    
    int num1, num2, num3, num4;
    scanf("%1d %1d %1d %1d", &num1, &num2, &num3, &num4);
    int ans[5][23] = {0};
    if (num1 == 0) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = zero[i][j];
            }
        }
    }
    else if (num1 == 1) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = one[i][j];
            }
        }
    }
    else if (num1 == 2) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = two[i][j];
            }
        }
    }
    else if (num1 == 3) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = three[i][j];
            }
        }
    }
    else if (num1 == 4) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = four[i][j];
            }
        }
    }
    else if (num1 == 5) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = five[i][j];
            }
        }
    }
    else if (num1 == 6) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = six[i][j];
            }
        }
    }
    else if (num1 == 7) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = seven[i][j];
            }
        }
    }
    else if (num1 == 8) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = eight[i][j];
            }
        }
    }
    else if (num1 == 9) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j] = nine[i][j];
            }
        }
    }
    
    if (num2 == 0) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = zero[i][j];
            }
        }
    }
    else if (num2 == 1) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = one[i][j];
            }
        }
    }
    else if (num2 == 2) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = two[i][j];
            }
        }
    }
    else if (num2 == 3) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = three[i][j];
            }
        }
    }
    else if (num2 == 4) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = four[i][j];
            }
        }
    }
    else if (num2 == 5) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = five[i][j];
            }
        }
    }
    else if (num2 == 6) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = six[i][j];
            }
        }
    }
    else if (num2 == 7) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = seven[i][j];
            }
        }
    }
    else if (num2 == 8) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = eight[i][j];
            }
        }
    }
    else if (num2 == 9) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+6] = nine[i][j];
            }
        }
    }
    
    if (num3 == 0) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = zero[i][j];
            }
        }
    }
    else if (num3 == 1) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = one[i][j];
            }
        }
    }
    else if (num3 == 2) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = two[i][j];
            }
        }
    }
    else if (num3 == 3) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = three[i][j];
            }
        }
    }
    else if (num3 == 4) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = four[i][j];
            }
        }
    }
    else if (num3 == 5) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = five[i][j];
            }
        }
    }
    else if (num3 == 6) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = six[i][j];
            }
        }
    }
    else if (num3 == 7) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = seven[i][j];
            }
        }
    }
    else if (num3 == 8) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = eight[i][j];
            }
        }
    }
    else if (num3 == 9) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+12] = nine[i][j];
            }
        }
    }

    if (num4 == 0) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = zero[i][j];
            }
        }
    }
    else if (num4 == 1) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = one[i][j];
            }
        }
    }
    else if (num4 == 2) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = two[i][j];
            }
        }
    }
    else if (num4 == 3) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = three[i][j];
            }
        }
    }
    else if (num4 == 4) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = four[i][j];
            }
        }
    }
    else if (num4 == 5) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = five[i][j];
            }
        }
    }
    else if (num4 == 6) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = six[i][j];
            }
        }
    }
    else if (num4 == 7) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = seven[i][j];
            }
        }
    }
    else if (num4 == 8) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = eight[i][j];
            }
        }
    }
    else if (num4 == 9) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                ans[i][j+18] = nine[i][j];
            }
        }
    }
    
    for (int i=0; i<5; i++) {
        for (int j=0; j<23; j++) {
            if (ans[i][j] == 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
