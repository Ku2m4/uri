#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{

    char vet[600];

   gets(vet);

    int soma = strlen(vet);

    if(soma<=80)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}
