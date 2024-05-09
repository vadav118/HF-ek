#include <stdio.h>

void findLottoNumbers() {
    int product = 996300;
    int sum = 90;

    for (int a = 1; a <= 45; a++) {
        for (int b = a + 1; b <= 45; b++) {
            for (int c = b + 1; c <= 45; c++) {
                for (int d = c + 1; d <= 45; d++) {
                    for (int e = d + 1; e <= 45; e++) {
                        for (int f = e + 1; f <= 45; f++) {
                            if (a + b + c + d + e + f == sum && a * b * c * d * e * f == product) {
                                printf("A hatoslottó nyerőszámai: %d %d %d %d %d %d\n", a, b, c, d, e, f);
                                return;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Nem található megfelelő kombináció.\n");
}

int main() {
    findLottoNumbers();
    return 0;
}