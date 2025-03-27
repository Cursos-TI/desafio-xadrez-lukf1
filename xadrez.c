#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese_brazil");

int selecionar;
int movimentos_baixo = 2;
int movimentos_esquerda = 1; //separação dos movimentos do Cavalo
int i = 0;

        //Menu interativo para "começar o jogo"
        printf("**Bem-Vindo a Movimentação de peças do Xadrez!**\n");
        printf("Selecione uma opção!\n");
        printf("1 - Iniciar\n");
        printf("2 - Regras\n");
        printf("3 - Sair do Jogo\n");
        scanf("%d", &selecionar);

        
        switch (selecionar) //Switch junto ao while
        {
        case 1:
            // Movimentos de outras peças (exemplo)
        printf("Movimentação das Peças\n");    
        printf("Cima\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        printf("Direita\n\n");
    
        // Separação dos movimentos anteriores e o do Cavalo
        printf("O Cavalo moveu para:\n");
        
        while (i < movimentos_baixo) {
        printf("Baixo\n");
        i++;
		}
    
        // Loop while para a casa para a esquerda
        int j = 0;
        while (j < movimentos_esquerda) {
        printf("Esquerda\n");
        j++;
        }
    
        return 0;

        case 2:
            printf("Isso é somente um teste para a movimentação do Cavalo!\n");
            break;
            return 0;
        
        case 3:
            printf("Volte Sempre!");
            break;
            return 0;    
        
        default: printf("Opção Inválida!\n");
            break;
        }
}