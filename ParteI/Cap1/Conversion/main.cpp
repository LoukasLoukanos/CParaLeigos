//Conversion - Programa que converte temperatura de
//             graus Celsius para Fahrenheit:
//             Fahrenheit = Celsius * (212 - 32)/100 + 32
#include <cstdio
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs [] )
{
    // insere a temperatura em Celsius
    int celsius;
    cout << "Enter the temperature in Celsius:";
    cin >> celsius;

    // calcula o fator de conversão de Celsius para Fahrenheit
    int factor;
    factor = 212 - 32;

    // usa o fator de conversão para converter Celsius para valores em Fahrenheit
    int fahrenheit;
    fahrenheit = factor * celsius/100 + 32;

    // exibe os resultados (seguido por um NewLine)
    cout << "Fahrenheit value is:";
    cout << fahrenheit << endl;

    // espera até o usuário estar pronto para fechar o programa para permitir que ele veja os resultados
    cout << "Press Enter to continue..." << endl;
    cin.ignore (10, '\n');
    cin.get();
    return 0;
}
