#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necess�rio para usar as fun��es malloc() e free()
#include <conio.h>
#include <locale.h>
#include "header_proj3.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int a, n;
	printf("Informe o tamanho do seu vetor: ");
	scanf("%d",&n);
	int vet[n];
		

	
	inicio:
	cout<<"\n1- Cadastrar n�mero: ";
	cout<<"\n2- Exibir n�mero(s) cadastrados: ";
	cout<<"\n3- Exibir quantidade de n�meros cadastrados: ";
	cout<<"\n4- Remover �ltimo n�mero cadastrado: ";
	cout<<"\n5- Sair\n";
	cin>>a;
	
	
	switch(a){
		case 1:
			cadastro(vet,n);
			goto inicio;
			
		case 2:
			exibir_n(vet,n);
			goto inicio;
			
		case 3:
			exibir_i(vet,n);
			goto inicio;
			
		case 4:
				//remover(vet);
				goto inicio;
		case 5:
			cout<<"Saindo...";
			break;
			
			default:
				cout<<"Op��o inv�lida, retornando...";
				goto inicio;
			
	}
}
