#include "testlib.h"

int main()
{
    registerValidation();
    int N = inf.readInt(1,50,"N");
    inf.readSpace();
    int M = inf.readInt(1,50,"M");
    inf.readEoln();

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
    inf.readEof();
    return 0;
}