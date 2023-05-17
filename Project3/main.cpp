#include <iostream>
using namespace std;


int main(){
    const int size = 15;
    int c[size] {0};
    int diap[2] {0};

    cout << "The range is from ";
    cin >> diap[0];
    cout << " to ";
    cin >> diap[1]; 
    for (int i = 0; i < size; i++){
        cout << "Enter = " << endl;
        cin >> c[i];
    }
    for (int i = 0; i < size; i++){
        if (c[i] % 3 == 0){
            cout << "A multiple of three[i] = " << i << endl;
        }
    }
    for (int i = 0; i < size; i++){
        if (c[i] % 11 == 0){
            if (c[i] < diap[1] and c[i] > diap[0]){
                cout << "A multiple of eleven = " << c[i] << endl;
            }
        }
    }
    return 0;
}