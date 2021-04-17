#include <iostream>

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
  std::cout << "Entre com a quantidade de letras da palavra:" 
  << std:: endl;
  std::cin >> N;
  
  // Entrada de dados no modelo #2=1
  std::cout << "Entre com os dados: '#' + 'numero da tecla' + '=' + 'numero de vezes'. Exemplo: #2=1"
  << std:: endl;
  
  // Armazena os dados de acordo com a qtd de palavras
  for (int cont=0;cont<N;cont++){ 
    
   std:: cin >> hashtag;
   std:: cin >> n_teclas[cont];
   std:: cin >> equal;
   std:: cin >> n_vezes[cont];
  
  if((hashtag!= '#')||(n_teclas[cont] < 2)||(n_teclas[cont] > 9)||(equal!= '=')){
   std::cout << "Algum(ns) dados estão incorretos, modelo aceito: 2#=2";
  }

  }
  
  for(int j=0;j<N;j++){

    std:: cout << abcdario[n_teclas[j]-2][n_vezes[j]-1];
         
}    
   
    return 0;

}
