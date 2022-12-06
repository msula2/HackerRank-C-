//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i = 0;
    long l = 0;
    char c = '\0';
    float f = 0.0;
    double d = 0.0;
    //Scanf and printf is prefered over cout and cin in case we have to read millions of inputs and print outputs
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d );
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i , l, c, f, d);
    return 0;
}
