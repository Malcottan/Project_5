#include <iostream>
using namespace std;


int main(){
    int size, l = 0;
    cout << "Array size: ";
    cin >> size;
    
    int c[size] {0}, c2[size] {0};

    for (int i = 0; i < size; i++){
        cout << "Enter = " << endl;
        cin >> c[i];
    }
    for (int i = size-1; i >= 0; i--){
        cout << c[i];
        c2[l] = c[i];
        l++;
    }
    return 0;
}
