#include <stdio.h>

/* celsius=0, 20, ..., 300に対して、摂氏-華氏対応表を印字する */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表の下限 */
    upper = 300;    /* 上限 */
    step = 20;      /* 刻み */

    /* ヘッダ出力 */
    printf("celsius fahr\n");
    printf("------- -----\n");

    /* 対応表出力 */
    celsius = lower;
    while (celsius <= upper) {
        /* 係数9/5=1.8にステップ20を掛けると36と割り切れるため、結果が整数になる（たまたま） */
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%6.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}
