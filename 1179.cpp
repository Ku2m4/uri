#include<iostream>

using namespace std;

void mostra_par(int vet[], int tam){
    for(int j=0; j<tam; j++){
        cout << "par[" << j << "] = " << vet[j] << endl;
    }
}

void mostra_impar(int vetor[], int tama){
    for(int k=0; k<tama; k++){
        cout << "impar[" << k << "] = " << vetor[k] << endl;
    }
}

int main()
{
    int num, contp=0, conti=0;
    int vetp[5], veti[5];

    for(int i=0; i<15; i++){
        cin >> num;

        if(num%2==0){
            vetp[contp] = num;
            contp++;
        }
        else{
            veti[conti] = num;
            conti++;
        }

        if(conti == 5){
            mostra_impar(veti, conti);
            conti=0;
        }

        if(contp == 5) {
            mostra_par(vetp, contp);
            contp = 0;
        }

        if(i==14){
            mostra_impar(veti, conti);
            mostra_par(vetp, contp);
        }


    }
    return 0;
}
