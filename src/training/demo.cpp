#include <iostream>
using namespace std;

void mysort(vector<int> &a);
int countEven(const vector<int> &v);

int main()
{
    vector<int> i{322, 23, 42, 53};
    cout << " How many even : " << countEven(i) << endl;
    mysort(i);
}

int countEven(const vector<int> &v){
    int counter = 0;
    for (const auto &c: v){
        if (c % 2 == 0)
            ++counter;
    }
    return counter;
} 

void mysort(vector<int> &a){
    cout << "Before : " << endl;
    cout << "[ ";
    for (int &c : a){
        cout << c << " ";
    }
    cout << "]";
    cout << endl;
    for (int &v : a){
       v+=10 ;
    }
    cout << "After : " << endl;
    cout << "[";
    for (int &c : a){
        cout << c << "\t";
    }
    cout << "]";
    cout << endl;
}
