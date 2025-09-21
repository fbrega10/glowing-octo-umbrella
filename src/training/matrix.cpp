#include <iostream>

using namespace std;

int main()
{
    const int dim = 4;
    array<array<int, dim>, dim> matrix{};
    cout << " [";
    for (size_t i = 0; i < 4; ++i){
        cout << " [ ";
        for (size_t j = 0; j < 4; ++j){
            matrix[i][j] = 0;
            cout << matrix[i][j];
            if (j < 3){
                cout << ", ";
            }
        }
        cout << " ]";
        if (i != 3){
            cout << endl;
        }
    }
    cout << " ]" << endl;
}

