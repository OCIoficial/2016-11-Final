#include "testlib.h"

int main()
{
    registerValidation();
    int N = inf.readInt(2,1000,"N");
    inf.readSpace();
    int T = inf.readInt(1,N,"M");
    ensuref(T==1, "T debe ser 1");
    inf.readSpace();
    int K = inf.readInt(1,999,"K");
    inf.readEoln();

    for(int i=0;i<T;i++){
        int t = inf.readInt(1,N,"(territorios controlados inicialmente)");
        if(i!=T-1) inf.readSpace();
    }
    inf.readEoln();
    
    int A = inf.readInt(1,10000,"A");
    inf.readEoln();

    for(int i=0;i<A;i++){
        int u = inf.readInt(1,N,"u");
        ensuref( u==i+1, "El mapa debe ser una linea");
        inf.readSpace();
        int v = inf.readInt(1,N,"v");
        ensuref( v==i+2, "El mapa debe ser una linea");
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}