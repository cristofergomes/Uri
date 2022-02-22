#include <stdio.h>
#include <math.h>

int main(){
	
	float n1, n2, n3, n4, media, ne, media2;
	
	printf("");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	printf("");
	scanf("%f", &ne);
	
	media = (0.2*n1 + 0.3*n2 + 0.4*n3 + 0.1*n4);
	printf("Media: %0.1f\n", media);
	if(media >= 7){
		printf("Aluno aprovado.\n");
	}else{
		if(media >= 5){
			printf("Aluno em exame.\n");
			printf("");
	        scanf("%f", &ne);
			printf("Nota do exame: %0.1f\n", ne);
			media2 = (media + ne)/2;
			if(media2 >= 5){
				printf("Aluno aprovado.\n");
			}else{
				printf("Aluno reprovado.\n");
			}
			printf("Media final: %0.1f\n", media2);
		}else{
			printf("Aluno reprovado.\n");
		}
	}			
	return 0;
}
