#include<iostream>
#include<utility>

using namespace std;

int main()
{
    int N, Q, c;

    while(cin >> N >> Q){
        int v[N];
        for(int k=0; k<N; k++){
            cin >> v[k];
        }
    int maior;
    for(int i=0; i<N-1; i++){
        maior = i;
        for(int j=i+1; j<N; j++){
            if(v[j] > v[maior])
                maior = j;
        }
        if(maior!= i){
            swap(v[i], v[maior]);
        }
    }
    for(int t=0; t<Q; t++){
        cin >> c;
        cout << v[c-1] << endl;
        }

    }
    return 0;
}
