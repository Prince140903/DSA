#include <iostream>
using namespace std;

int isPrime(int n) {
    int count = 0;

    for(int i = 2; i <= n/2; i++){      //loop from 2 to n/2
        if(n % i == 0){                 //if number gets remainder 0 then its not prime num
            count++;
        }
    }

    if(count == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n; 

    cout << "Enter value of n: ";
    cin >> n;

    if(isPrime(n)){                             //Return boolean true
        cout << n << " is Prime Number";
    }
    else{                                       //Return boolean false
        cout << n << " is not Prime Number";
    }

    return 0;
}