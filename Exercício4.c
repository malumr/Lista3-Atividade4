#include <stdio.h>
float calcularMedia(float n1, float n2, float n3, float n4) {
	return (n1 + n2 + n3 + n4) / 4;
}
int main() {
	float nota1, nota2, nota3, nota4, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	media = calcularMedia(nota1, nota2, nota3, nota4);
	printf("Média: %.2f\n", media);
	if (media >= 7) {
		printf("Aprovado\n");
	} else {
		printf("Reprovado\n");
	}
	return 0;
}
