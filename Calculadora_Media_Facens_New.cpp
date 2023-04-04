#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//inserindo bibliotecas
int main() {
    //nomeando as variaveis da nota
    double ac1, ac2, ag, af;
    //inserindo variavel char
    char op;
    //definindo variavel char
    char pergunta = 's';
    //inserindo variavel string para digitar nome
    string nome;
    //inserindo varievel int para digitar ra
    int ra;
    //inserindo variavel while, permitindo pergunta
    while (pergunta == 's') {
    //digitando nome 
    cout << "Qual o seu nome? ";
    //nome inserido
    cin >> nome;
    //digitando RA
    cout << "Digite seu RA. ";
    //Ra inserido
    cin >> ra;
    //digitando o valor da variavel ac1
    cout << "Digite a sua nota da ac1 >>>";
    //variavel ac1 trancrita
    cin >> ac1;
    //digitando o valor da variavel ac2
    cout << "Digite a sua nota da ac2 >>>";
    //variavel ac2 trancrita
    cin >> ac2;
    //digitando o valor da variavel ag
    cout << "Digite o valor da ag >>>";
    //variavel ag transcrita
    cin >> ag;
    //digitando o valor da variavel af
    cout << "Digite a sua nota da af >>>";
    //variavel af transcrita
    cin >> af;
    //tranformando nota em media
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    ag = (ag * 0.1);
    af = (af * 0.40);
    //Inserindo medidas de condições da nota (aprovado ou reprovado)
    double soma = (ac1 + ac2 + ag + af);
    //nome colocado nop resultado
    cout << "nome: " << nome << endl << "RA: " << ra << endl;
    //resultado da soma de media
    cout << "A sua média do semestre foi: " << soma << endl << endl;
    if (soma >= 7) {//aprovado com nota maior que 7
        cout << "Parabéns! Você ganhou a partida!" << endl;
    }else if (soma >=5 && soma <7){//recuperação com nota menor que 7 e maior que 5
        cout << "Eita! Você ta ficando para trás! Está na recuperação" << endl;
    }else{//reprovado com nota menor que 5
        cout << "Que pena! Você foi de comes e bebes! F" << endl;
    }
    cout << "Continuar? "; //
    cin >> pergunta;
    }
    return 0;

}
