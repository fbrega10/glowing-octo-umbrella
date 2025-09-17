#include <iostream>
using namespace std;

int main(){
    int i[] = {322, 23, 42, 53};
    
    int counter = 0;
    for (const int &a : i){
        cout << ++counter << " " << "counting " << a << "\n";
    }
}

