//Desenvolver as funções da biblioteca
float n=10;
int vetor(int *vet){
	for(i=0;i<n;i++){
		printf("Vetor [%d] de valor: %d",i,vet);
	}
}
int impar(int *imp){
	for(int i; i<n; i++){
		if(vet[i]!=0)
		printf("%d\n",imp);
	}
}
int par(int*p){
	for(int i; i<n; i++){
		if(vet[i]==0)
		printf("%d\n",p);
	}
}
int parar(int*para){
	for(int i; i<n; i++){
		if(vet[i]==4)
		break;
	}
	else
	cout<<"Opção invalida, fim de programa";
}



