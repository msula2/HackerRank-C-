#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     int sizeArr = 0;
     //Recieve the number of integers
    scanf("%d", &sizeArr);  
    if (sizeArr < 1 || sizeArr > 1000){
         return -1;
    }
    //Dynamic allocation, no need for malloc unlike in C
    int arr[sizeArr];
    int num = 0;
    for(int index = 0; index < sizeArr ; index++){
        //Iterate through array and save user input
        scanf("%d", &num);
        if (num >= 1 && num <= 10000){
            arr[index] = num;    
        }
    }
    //Print in reverse order
    for (int revIndex = sizeArr - 1; revIndex >= 0 ; revIndex--){
        printf("%d ", arr[revIndex]);
    }
    return 0;
}
