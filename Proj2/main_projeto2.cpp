#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necess�rio para usar as fun��es malloc() e free()
#include <conio.h>
#include <locale.h>
#include "header_projeto2.h"
using namespace std;


int main (int argc, char**argv){
	setlocale(LC_ALL, "Portuguese");
	int n=10,a, vet[n];
	for(int i=0;i<n;i++){
		printf("Diga o numero da posi��o %d: ",i+1);
		scanf("%d",&vet[i]);
	}
	cout<<"Favor selecionar op��o:\n";
	cout<<"1) Exibir vetor informado: ";
	cout<<"2) Exibir elementos �mpares armazenados no vetor: ";
	cout<<"3) Exibir elementos pares no vetor: ";
	cout<<"4) Encerrar o programa: ";
	cin>>a;
	vetor(vet);
	impar(imp);
	par(p);
	parar(para);
	
}

