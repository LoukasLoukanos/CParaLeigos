// WhileDemo - insere um loop count. O loop while
//exibe a sa�da astering arg in�meras vezes
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // insere o loop count
    int nLoopCount;
    cout << "Enter loop count: ";
    cin  >> nLoopCount;

    // agora faz o loop v�rias vezes
    while (nLoopCount > 0)
    {
        nLoopCount = nLoopCount - 1;
        cout << "Only " << nLoopCount
             << " loops to go" << endl;
    }

    // espera at� o usu�rio estar pronto
    // para encerrar o programa para
    // permitir que ele veja os resultados
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
