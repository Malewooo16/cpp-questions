#include <iostream>
#include <stdio.h>
using namespace std;

// using elcidian algorithm we are finding the gcd of two given numbers

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main (){
	
    int first, second;
    cout<< "Enter the numbers: ";
    cin >> first >> second;
    int answer = gcd(first, second);
    cout << "The gcd is " << answer ;

  
}

