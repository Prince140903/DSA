#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "Vector size is: " << vec.size() << endl; //5
    cout << "Vector Capacity is: " << vec.capacity(); //8

    return 0;
}