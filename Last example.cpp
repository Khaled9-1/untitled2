#include <iostream>
void swapNums( int&x, int&y){
    int z = x;
    x = y;
    y =z;
}
using namespace std;
int main() {
    int firstNum = 10;
    int secondNum= 20;
    cout<< "Before swap:" << "\n";
    cout<< firstNum << secondNum << "\n";
    swapNums(firstNum, secondNum);
    cout<< "After swap:" << "\n";
    cout<< firstNum << secondNum << "\n";
}
