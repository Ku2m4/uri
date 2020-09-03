#include<iostream>
#include<utility>
using namespace std;

void ordena(string v[], int x){
    int menor;
    for(int i=0; i<x-1; i++){
        menor = i;
        for(int j=i+1; j<x; j++){
            if(v[j] < v[menor])
                menor = j;
        }
        if(menor!= i){
            swap(v[i], v[menor]);
        }
    }
    for(int i=0; i<x; i++)
        cout << v[i] << endl;
}

int main()
{
    int n;
    while(cin >> n){
        string vet[n];
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        ordena(vet, n);
    }
    return 0;
}
