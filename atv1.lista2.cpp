 #include <iostream>
 
 main(){
 	setlocale(LC_ALL, "Portuguese");
 	int numero, quantidadeDeDivisores;
 	
 	quantidadeDeDivisores = 0; //inicia a variável
 	
 	printf("\nDivisores de um numero qualquer.\n\n");
 	
 	printf("Insira um número: ");
 	scanf("%d", &numero);
 	
 	printf("\n D(%d): ", numero);
 	
 	 //imprimi os divisores e obtêm a sua quantidade
    for (int i = 1; i <= numero; ++i) {
        //um número é divisor de outro quando o resto da divisão for igual a 0
        if (numero % i == 0) {
            printf(" %d ", i);
            quantidadeDeDivisores++; //incrementa a variável
        }
    }

    printf("\n\n Numero de divisores: %d\n\n", quantidadeDeDivisores);

    system("pause");
    return 0; 
 }
 
