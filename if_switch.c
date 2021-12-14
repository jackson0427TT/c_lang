/*
C言語学習記録_jackson_0427
if, switch文の理解.
*/
#include<stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);

    int y = x;
    if (y < 0) y = -y;
    if (!y) y = 1;

    //if文の場合
    if (!x) printf("x is zero.\n");
    else if (x > 0) printf("x is plus.\n");
    else printf("x is minus.\n");

    //switch文の場合(break文が分岐に必須.)
    switch (x / y) {
        case 0 : puts("x is zero."); break;
        case 1 : puts("x is plus."); break;
        default : puts("x is minus."); break;
    }

    //条件演算子の場合
    printf("x is ");
    printf(x ? (x > 0 ? "plus.\n": "minus.\n"): "zero.\n");
    return 0;
}