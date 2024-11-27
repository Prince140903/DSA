#include <iostream>
#include <vector>
using namespace std;

int changeVal(int &b){              //pass by reference using alias
    b = 20;
}

int main()
{
    int a = 10;
    int* ptr = &a;                  //Pointer
    int** parPtr = &ptr;            //Pointer to Pointer

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << parPtr << endl;
    cout << &parPtr << endl;
    cout << *(ptr) << endl;         //Dereference to get value at address
    cout << *(parPtr) << endl;
    cout << **(parPtr) << endl;     //Dereference twice to get value of reference

    int* Gptr;
    int* ptr1 = NULL;
    
    cout << Gptr << endl;           //Returns Garbage value
    cout << ptr1 << endl;           //Returns 0   for NULL

    changeVal(a);
    cout << "The value of a is: " << a << endl;

    int arr[] = {1, 2, 3, 4};
    cout << "The address of arr: " << arr << endl;
    cout << "The value of arr on 0 idx: " << *arr << endl;
    cout << "The value of arr on 1 idx: " << *(arr+1) << endl;     //Contigous property of Arrays hence returns next value
    cout << "The value of arr on 2 idx: " << *(arr+2) << endl;
    cout << "The value of arr on 3 idx: " << *(arr+3) << endl;

    cout << ptr << endl;
    ptr++;                          //Incremet using + operator Adds 4 integer space
    cout << ptr << endl;
    ptr--;                          //Incremet using - operator Subtracts 4 integer space
    cout << ptr << endl;

    return 0;
}