#include<stdio.h>

int add(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divide(int a, int b);

int main(){
  printf("hello world\n");
  printf("10 + 2 = %d\n",add(10, 2));
  printf("10 - 2 = %d\n",minus(10, 2));
  printf("10 * 2 = %d\n",multi(10, 2));
  printf("10 / 2 = %d\n",divide(10, 2));
}

// 足し算
int add(int a, int b){
  return a + b;
}

// 引き算
int minus(int a, int b){
  return a - b;
}

// 掛け算
int multi(int a, int b){
  // TODO:
  return 0;
}

// 割り算
int divide(int a, int b){
  return a / b;
}
