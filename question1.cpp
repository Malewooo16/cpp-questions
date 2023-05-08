#include <iostream>
#include <string> 
using namespace std;
// This program displays the multiplication table of 24
int main(){
    for(int initial = 1;initial < 25;initial++){
    	for(int next=1;next < 25;next++){
    		cout << initial * next << "\t";
		}
		cout <<endl;
    }
    

}
