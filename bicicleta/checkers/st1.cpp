#include "testlib.h"
using namespace std;

int main()
{
    registerValidation();
    int N = inf.readInt(2,2,"N");
    inf.readSpace();
    int T = inf.readInt(1,100,"T");
    inf.readEoln();

    int ant = 90001;
    for(int i=0;i<N;i++){
		int g = inf.readInt(0,90000,"g");

        ensuref(g < ant, "Lista de pendientes para cambios debe estar ordenada de mayor a menor.");
        ant = g;
        if(i!=N-1) inf.readSpace();
    }
    inf.readEoln();

    for(int i=0;i<T;i++){
        inf.readInt(0,90000, "p");
        if(i!=T-1) inf.readSpace();
    }
    inf.readEoln();

    inf.readEof();
    return 0;
}
