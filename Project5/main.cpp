#include <iostream>
using namespace std;


int main(){
    int c[20] {0}, k;
    bool q[20] {0}, flag = 0;

    for (int i = 0; i < 20; i++){
        cout << "Enter = ";
        cin >> c[i];
    }
    for (int i = 1; i < 20; i++){
        while(flag == 0){
            for (int j = 0; j < i; j++){
                if (c[j] == c[i]){
                    q[i] = 1;
                    flag = 1;
                    break;
                }
                if(j == i-1){
                    break;
                }
            }
            if(flag == 1){
                if(i != 19){
                cout << c[i] << ", ";
                k++;
                break;
                } else {
                    cout << c[i] << endl;
                    k++;
                    break;
                }
            } else {
                break;
            }
        }
        flag = 0;
    }
    int e[20-k] {0}, a = 0;
    for (int i = 0; i < 20-k; i++){
        if(q[i] == 0){
            e[a] = c[i];
            a++;
        }    
    }
    cout << "New Array: ";
    for (int i = 0; i < 20-k; i++){
        cout << e[i] << ", ";
    }

    delete[] c;
    delete[] q;
    return 0;
}








// #include <iostream>
// using namespace std;


// int main(){
//     int x, size = 20;
//     bool flag;
//     string w;
//     int c[20] {0};

//     for (int i = 0; i < size; i++){
//         cout << "Enter = " << endl;
//         cin >> x;
//         flag = 1;
//         if (i > 0){
//             for (int j = 0; j < i; j++){
//                 if (x == c[j]){
                    
//                     flag = 0;
//                 } 
//             }
//         }
//         if (flag == 1){
//                 c[i] = x;
//             }
//     }
//     cout << w;
//     return 0;
// }
