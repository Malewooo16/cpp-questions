#include <iostream>
using namespace std;
//this makes a isocles triangle
int main()
{
    int rows= 5;

    for(int i=0; i<rows; i++){
        int num = 1;
        for(int j=0; j<rows-i-1; j++){
            cout << "  ";
        } 
        for(int j=0; j < 2 * i + 1; j++){
            cout << " *" ;
            num = num * (i-j) / (j+1);
        }
        cout << endl;
    }

    return 0;
}
