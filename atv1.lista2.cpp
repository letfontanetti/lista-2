 #include <iostream>
 
 main(){
 	setlocale(LC_ALL, "Portuguese");
 	int numero, quantidadeDeDivisores;
 	
 	quantidadeDeDivisores = 0; //inicia a vari�vel
 	
 	printf("\nDivisores de um numero qualquer.\n\n");
 	
 	printf("Insira um n�mero: ");
 	scanf("%d", &numero);
 	
 	printf("\n D(%d): ", numero);
 	
 	 //imprimi os divisores e obt�m a sua quantidade
    for (int i = 1; i <= numero; ++i) {
        //um n�mero � divisor de outro quando o resto da divis�o for igual a 0
        if (numero % i == 0) {
            printf(" %d ", i);
            quantidadeDeDivisores++; //incrementa a vari�vel
        }
    }

    printf("\n\n Numero de divisores: %d\n\n", quantidadeDeDivisores);

    system("pause");
    return 0; 
 }
 
