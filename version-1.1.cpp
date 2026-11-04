#include <iostream>
using namespace std;

int main()
{
    int age;
    cout <<"inter your age to take your ticket : b";
    cin >> age;
    cout << endl;
    if (age <0 ){
        cout << "your number is invalid ";
    }
    else if (age <12 ){
        cout << "your ticket coust 50";
    }
    else if ( age < 59){
        cout <<"your ticket coust 100";
    }
    else {
        cout << "your ticket coust 60";
    }
    return 0;
}
