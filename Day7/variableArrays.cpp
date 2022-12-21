#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     //Read input from user
    // n is the number of variable sized arrays
    //q is the number of queries
    int n, q = 0;
    scanf("%d %d\n", &n, &q);
    
    //Create array containing vectors
    vector<int> vecArr[n];
    //Read input into vectors because of varying length
    int element = 0;
    char ch;
    for(int numArr = 0 ; numArr < n ; numArr++){
        while(scanf("%d", &element) && (ch = getchar()) != '\n'){  
            vecArr[numArr].push_back(element);
        }
    }
    return 0;
}
