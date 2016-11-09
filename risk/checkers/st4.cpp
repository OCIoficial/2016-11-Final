#include "testlib.h"
using namespace std;

int main()
{
    registerValidation();
    int N = inf.readInt(2,1000,"N");
    inf.readSpace();
    int T = inf.readInt(1,N,"M");
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


    set<pair<int,int> > e;

    for(int i=0;i<A;i++){
        int u = inf.readInt(1,N,"u");
        inf.readSpace();
        int v = inf.readInt(1,N,"v");
        inf.readEoln();

        ensuref(u != v, "No puede haber loops");
        ensuref(e.count(make_pair(u, v)) == 0, "grafo debe ser no dirigido");

        e.insert(make_pair(u, v));
        e.insert(make_pair(v, u));
    }

    inf.readEof();
    return 0;

}