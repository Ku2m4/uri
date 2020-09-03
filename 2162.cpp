#include<iostream>

using namespace std;

int main(){
    int n, aux = 1;

    cin >> n;;

    int vet[n];

    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    if(n==2 && vet[0] == vet[1]) aux = 0;
    
    else{
        for(int i=2; i<n; i++){
            if(vet[i] >= vet[i-1] && vet[i-1] >= vet[i-2]){
                aux = 0;
                break;
            }
            else if(vet[i] <= vet[i-1] && vet[i-1] <= vet[i-2]){
                aux = 0;
                break;
            }
        }
    
    }
    if(aux == 1) cout << "1" << endl;
    else 
        cout << "0" << endl;

    return 0;
}