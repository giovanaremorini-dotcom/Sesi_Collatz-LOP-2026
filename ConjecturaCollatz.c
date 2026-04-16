#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n, op = 0;
	printf("Informe um número inteiro diferente de 1.\n");
	scanf("%d", &n);
	
	while(n != 1){
		if (n % 2 == 0){
			printf("%d / 2 =\n", n);
			n = n / 2;
			op++;
		}else{
			printf("%d * 3 + 1 =\n", n);
			n = n * 3 + 1;
			op++;
		}
	}
	printf("Seu número deu 1! Foram necessárias %d operações para chegar neste resultado.", op);
}