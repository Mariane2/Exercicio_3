#include <iostream>

// ATIVIDADE 3 - Problema da escrita no celular (ao contrário)
// Autor(a): Mariane Lima Dutra

int main() {

// Declaração das variáveis

 int N;              // Quantidade de letras da palavra
 int n_teclas[50];   // Número da tecla referente a letra desejada
 char hashtag;       // Armazena o caracter #
 char equal;         // Armazena o caracter =
 int n_vezes[50];    // Número de vezes que a tecla foi apertada.


  char abcdario[8][4]= {{'A' ,'B', 'C'} ,      // Matriz abcdário
                      {'D' ,'E' ,'F'},
                      {'G' ,'H' ,'I'},
                      {'J' ,'K' ,'L'},
                      {'M' ,'N' ,'O'}, 
                      {'P' ,'Q' ,'R','S'},
                      {'T' ,'U' ,'V'},
                      {'W' ,'X' ,'Y', 'Z'}};

  // Leitura da quantidade de letras da palavra:                    
  std::cout << "Entre com a quantidade de letras da palavra:\n"; 
  std::cin >> N;
  std::cout<<"\n";

  // Entrada de dados no modelo #2=1
  std::cout << "Entre com os dados: '#' + 'numero da tecla' + '=' + 'numero de vezes'. \n (Exemplo: #2=1) \n";

  // Armazena os dados de acordo com a qtd de palavras.
  for (int cont=0;cont<N;cont++){ 
      
   std:: cin >> hashtag;
   std:: cin >> n_teclas[cont];
   std:: cin >> equal;
   std:: cin >> n_vezes[cont];
  
  // Enquanto os dados não estiverem no formato correto,pede-se para preecher as informações novamente:
  while((hashtag != '#')||(n_teclas[cont] < 2)||(equal != '=')||(n_vezes[cont] < 1)||(n_vezes[cont] > 4)){

   std::cout << "\n Algum(ns) dados estão incorretos, modelo aceito: 2#=2.  Entre com os dados novamente:\n";
   
   std:: cin >> hashtag;
   std:: cin >> n_teclas[cont];
   std:: cin >> equal;
   std:: cin >> n_vezes[cont];

   }

  }
  
  std::cout << "\n A palavra digitada é: \n";

  // Lê os vetores do numero da tecla e quantidade de vezes apertada e informa a sequência de caracteres correspondentes.
  for(int j=0;j<N;j++){ 

    std:: cout << abcdario[n_teclas[j]-2][n_vezes[j]-1];         
  }    
   
    std::cout << "\n Aperte CNTRL + ENTER para reiniciar...";
    
  return 0;

}
