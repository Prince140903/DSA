#include <iostream>
using namespace std;

int isPrime(int n) {
    int count = 0;

    for(int i = 1; i <= n; i++){      
        if(n % i == 0){                
            count++;
        }
    }
    return count;
}

int main(){

    int n; 

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Prime numbers till n are: "; 
    
    for(int j = 2; j <= n; j++){
        if(isPrime(j) == 2){
            cout << j << " ";
        }
    }

    return 0;
}