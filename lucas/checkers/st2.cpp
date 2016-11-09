#include "testlib.h"
using namespace std;

int main()
{
    registerValidation();
    int N = inf.readInt(1,50,"N");
    inf.readSpace();
    int M = inf.readInt(1,50,"M");
    inf.readEoln();

    ensuref( N < M, "N debe ser menor que M");

    int p1[N];
    for(int i=0;i<N;i++){
        p1[i] = inf.readInt(0,255,"(letras primera palabra)");
        if(i!=N-1) inf.readSpace();
    }
    inf.readEoln();
    
    int p2[M];
    for(int i=0;i<M;i++){
        p2[i] = inf.readInt(0,255,"(letras segunda palabra)");
        if(i!=M-1) inf.readSpace();
    }
    inf.readEoln();

    // chequea que la segunda sea extensión de la primera
    for(int i=0;i<N;i++)
        ensuref( p1[i] == p2[i], "La segunda palabra debe ser una extensión de la primera");

    inf.readEof();
    return 0;
}