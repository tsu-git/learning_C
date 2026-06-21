#include <stdio.h>

/* fah=0, 20, ..., 300に対して、華氏-摂氏対応表を印字する */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表の下限 */
    upper = 300;    /* 上限 */
    step = 20;      /* 刻み */

    /* ヘッダ出力 */
    printf("fahr celsius\n");
    printf("---- -------\n");

    /* 対応表出力 */
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
