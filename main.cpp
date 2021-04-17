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
  std::cout << "Entre com a quantidade de letras da palavra:\n"; 
  std::cin >> N;
  std::cout<<"\n";

  // Entrada de dados no modelo #2=1
  std::cout << "Entre com os dados: \n '#' + 'numero da tecla' + '=' + 'numero de vezes'. \n (Exemplo: #2=1) \n";

  
  // Armazena os dados de acordo com a qtd de palavras
  for (int cont=0;cont<N;cont++){ 
      
   std:: cin >> hashtag;
   std:: cin >> n_teclas[cont];
   std:: cin >> equal;
   std:: cin >> n_vezes[cont];
  
  while((hashtag!= '#')||(n_teclas[cont] < 2)||(n_teclas[cont] > 9)||(equal!= '=')){

   std::cout << "\n Algum(ns) dados estão incorretos, modelo aceito: 2#=2.  Entre com os dados novamente:\n";
   
   std:: cin >> hashtag;
   std:: cin >> n_teclas[cont];
   std:: cin >> equal;
   std:: cin >> n_vezes[cont];

  }
  
   std::cout<<"\n";


  }
  
  for(int j=0;j<N;j++){

    std:: cout << abcdario[n_teclas[j]-2][n_vezes[j]-1];
         
}    
   
    return 0;

}
