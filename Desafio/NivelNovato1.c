   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h> //Para strcspn


  // --- CONSTANTE GLOBAIS ---
   #define MAX_TERRITORIOS 10
   #define TAM_STRING 100

  // DEFINIÇÕES DA ESTRUTURA (STRUCT)
   struct Territorio {
     char Nome[TAM_STRING];
     char Cor [TAM_STRING];
     int Tropas;

   };

   //--- FUNÇÃO PARA LIMPAR O BUFFER DA ENTRADA ---
   void LimpadorBufferEntrada() {
       int c;
       while((c = getchar)) != '/n' && c != EOF);
   }
 
   int main(){
    struct Territorio Mundos[MAX_TERRITORIOS];
    int totalTerritorios = 0;
    int opcao;


    // LACO PRINCIPAL
    do{
      //MENU DO JOGO
    printf("===== Jogo War ====");
    printf("1 - Iniciar Jogo \n");
    printf("2 - ListaDDos Territorios \n ");
    printf("0 - Sair Do Jogo \n");
    printf("\n");
    printf("Escolha uma das opções:");

    // O USUÁRIO LÊ AS OPÇÕES 
    scanf("%d", &opcao);
    limparbufferEntrada(); //LIMPA O'\N' DEIXADO PELO SCANF
    
    // PROCESSO DAS OPÇÕES 

    switch (opcao) {
        case 1: // INICIAÇÃO DO JOGO
        printf(" Escola o nome do territorio \n\n");

        if( MaxTerritorios < MAX_TERRITORIOS){
            printf("Digite o nome do territorio: ");
            fgets(Territorio[MaxTerritorios].Nome, TAM_STRING, stdin);

            printf("Digite a cor da sua bandeira (Ex: Azul , Branco , Vermelho..)");
            fgets(Territorio[MaxTerritorios].Cor , TAM_STRING , stdin);

            Territorio[MaxTerritorios].Nome[strcspn(Territorio[MaxTerritorios].Nome, "\n")];
                                                                                                   
        }
    }
}
   }