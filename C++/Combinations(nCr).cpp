#include <iostream>
using namespace std;

int factorial(int n){           //Factorial of number like 4! -> 4*3*2*1
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n, r, nCr;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    nCr = factorial(n) / (factorial(r) * factorial(n-r));       //Formula of nCr
    cout << nCr;

    return 0;
}