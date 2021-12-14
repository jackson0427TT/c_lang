
/*
C言語学習記録_jackson_0427
double型の使用.
ABC231-Aを利用して学習.
*/
#include<stdio.h>

int main(void) {
    //入力.
    double D;
    scanf("%lf", &D);

    //計算.intとdoubleではint→doubleの型変換が起こる.
    double ans = D / 100;
    //他にもans = (int)D / (double)100でも可能.(キャスト)

    //出力.精度指定は.(数字).
    printf("%.10f", ans);
    return 0;
}