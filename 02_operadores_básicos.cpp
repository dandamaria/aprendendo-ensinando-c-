#include <iostream>
#include <math.h> //biblioteca de matemática

int main(){

    float soma, subtracao, multiplicacao, potenciacao, divisao, resto; //Declarando as variáveis, esse nome float serve para indicar o *tipo (arquivo 03)
    soma = 3+5; // a variável soma recebe o RESULTADO de 3+5 (8);
    subtracao = 9-4;
    multiplicacao = 3*4;
    potenciacao = pow(5,2); //para potencia precisamos de uma função da biblioteca math -> pow(base,expoente);
    divisao = 36/6;
    resto = 35%6; // aqui a variável recebe o valor do resto da divisão 35 por 6 (5);

    std::cout<<soma<<"\n"<<subtracao<<"\n"<<multiplicacao<<"\n"<<potenciacao<<"\n"<<divisao<<"\n"<<resto; //aqui imprimimos todos os resultados de um só fez, separando cada variável pelo indicador << e usando "\n" para pular de linha, observe os resultados;
    return 0;
}