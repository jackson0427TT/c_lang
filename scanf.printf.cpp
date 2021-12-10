
/*
C言語学習記録_jackson_0427
入手出力形式
c_lang...scanf, printf //cin, coutと比較して高速
c++...cin, cout
*/
#include<stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y); //整数値x, yに入力.(関数に渡す値は参照.コピーされるとmain内で反映されない.)

    printf("%d", x + y); //整数値xとyを加えた結果を表示.
    
    return 0;
}