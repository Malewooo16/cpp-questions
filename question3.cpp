#include <iostream>
#include <stdio.h>
using namespace std;
//this finds the average of the first 200 natural numbers
int main (){
    float total;
    float average;
    for(float pursuit = 1;pursuit <= 200;pursuit++){
        total+=pursuit;
        average = total/200;
    }
    cout << average ; 
}

