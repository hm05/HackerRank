#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int sum = solveMeFirst(num1, num2);
    cout << sum;
    return 0;
}
