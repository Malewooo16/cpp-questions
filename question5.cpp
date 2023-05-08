#include <iostream>
#include <stdio.h>
using namespace std;
//this sums only the positive numbers given and starts to find the sum when a negative number is entered
int main(){
    int num, sum = 0;
    cout << "Enter two positive numbers" << endl;
    while (true) {
        cin >> num;
        if (num < 0) {
            break;
        }
        sum += num;
    }

    cout << "The sum of positive numbers is: " << sum << endl;
    return 0;
}
