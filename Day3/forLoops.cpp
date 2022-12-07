//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b = 0;
    scanf("%d\n%d\n",&a,&b);
    for (int num = a; num <= b ; num++ ){
        if (num >= 1 && num <= 9){
            if (num == 1){
                printf("one\n");
            }
            else if (num == 2 ){
                printf("two\n");
            }
            else if (num == 3 ){
                printf("three\n");
            }
            else if (num == 4 ){
                printf("four\n");
            }
            else if (num == 5){
                printf("five\n");
            }
            else if (num == 6){
                printf("six\n");
            }
            else if (num == 7){
                printf("seven\n");
            }
            else if (num == 8){
                printf("eight\n");
            }
            else{
                printf("nine\n");
            }
        }
        else if (num > 9){
            if (num % 2 == 0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
    }
    return 0;
}
