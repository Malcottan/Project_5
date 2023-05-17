#include <iostream>
using namespace std;


int main(){
    int c[20] {0};

    for (int i = 0; i < 20; i++){
        cout << "Enter = " << endl;
        cin >> c[i];
    }
    for (int i = 1; i < 20; i++){
        for (int j = 1; j < i; j++){
            if (c[j] == c[i]){
                cout << c[i] << ", ";
            }
        }
    }
    return 0;
}
