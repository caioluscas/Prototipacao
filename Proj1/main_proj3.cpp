
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include"header_proj1.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char letra;
		while(letra!=27){
		cout<<"Digite uma letra: ";
		letra=getch();
		mostrar (letra);
		if(letra==27){
			printf("\nsaindooo");
		}
}
	return 0;
}
