#include<iostream>

using namespace std;

int main(){
    int linha, coluna;
    bool flag = false;

    cin >> linha >> coluna;
    int m[linha][coluna];

    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            cin >> m[i][j];
        }
    }
    for(int i=1; i<linha-1; i++){
        for(int j=1; j<coluna-1; j++){
            if(m[i][j] == 42 && m[i - 1][j - 1] == 7 && m[i][j - 1] == 7 && m[i + 1][j - 1] == 7 && m[i - 1][j] == 7 && m[i + 1][j] == 7 && m[i - 1][j + 1] == 7 && m[i][j + 1] == 7 && m[i + 1][j + 1] == 7){
                cout << i+1 << " " << j+1 << endl;
                flag = true;
                return 0;
            }
        }
    }
    if(flag == false) cout << "0 0" << endl;
    return 0;
}