#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    int c[size] {0};
    float sum = 0;

    for (int i = 0; i < size; i++){
        cout << "Enter = " << endl;
        cin >> c[i];
    }
    for (int i = 0; i < size; i++){
        sum = sum + c[i];
    }
    cout << "Arithmetic mean = " << sum / size;
    return 0;
}














/*
int main(){
    const int size = 10;
    int c[size] {0};

    for (int i = 0; i < size; i++){
        cout << "Enter = " << endl;
        cin >> c[i];
    }

    int min = c[0], max = c[0];

    for (int i = 0; i < size; i++){
        if (min > c[i]){
            min = c[i];
        }
        if (max < c[i]){
            max = c[i];
        }
    }
    cout << min << endl;
    cout << max << endl;
    return 0;
}
*/


// Вивід масиву(array)
/*
int main(){
    int c[5] {0};
    for (int i = 0; i < 5; i++){
        cout << c[i] << endl;
    }
    return 0;
}
*/