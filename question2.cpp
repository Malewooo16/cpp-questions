#include <iostream>
#include <string>
using namespace std;
//this program sums the first 100 natural numbers
int main(){
    int total;
    for(int pursuit = 1;pursuit <= 100;pursuit++){
        total+=pursuit;
    }
    cout << total ; 
}