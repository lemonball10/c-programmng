//C言語の関数について
//特定の処理をまとめたプログラム
#include <stdio.h>

int add(int a,int b);//関数のプロトタイプ宣言
int add5(int a);
int main(void) {
    printf("%d\n",add5(3));
}

//メイン関数は、プログラム全体で最初に実行させる関数
//私たちが作った関数は、すべてメイン関数で実行させる

int add(int a,int b){
    return a+b;
}


//関数はリターンを書く

int add5(int a){
a = a + 5;
return a;
}