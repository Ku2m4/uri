#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{

    char vet[600];

   gets(vet);

    int soma = strlen(vet);

    if(soma<=140)
        cout << "TWEET\n";

    else
        cout << "MUTE\n";

    return 0;
}
