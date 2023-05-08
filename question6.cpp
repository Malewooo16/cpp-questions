#include <iostream>
using namespace std;
// this makes a right angle triangle 
int main()
{
    for(int limit= 1; limit != 7; limit++){
        for (int adder=1; adder != limit; adder++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}