#include <iostream>
#include <fstream>

int main() {
  int arranjo[] = {1, 2, 3, 4, 5};
  int *arranjoPtr = arranjo;
  std::cout<<"Array original: [ ";
  for (int i = 0; i < 5; i++) {
    std::cout<<arranjo[i]<<" ";
  }
  std::cout<<"]"<<std::endl;
  std::cout<<"Iterando o array com ponteiros, lembrando como faríamos com vetores em assembly: [ ";
  for (int i = 0; i < 5; i++) {
    std::cout<<*(arranjoPtr+i) << " ";
  }
  std::cout<<"]"<<std::endl;
  std::cout<<"Esse resultado foi tão bom que decidi salvar ele em um arquivo chamado insights.txt!"<<std::endl;
  std::ofstream arquivodesaida;
  arquivodesaida.open("Insights.txt");
  arquivodesaida<<"[ ";
  for (int i = 0; i < 5; i++) {
    arquivodesaida<<*(arranjoPtr+i) << " ";
  }
  arquivodesaida<<"]"<<std::endl;


}
