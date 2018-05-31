#include <iostream>
#include "header.h"
using namespace std;

int main(){
    int num;
    int square;
    cout << "Enter a number: ";
    cin >> num;

    square = Square(num);
    cout << "The square of the number " << num << " is: " << square << endl;

    return 0;
}
