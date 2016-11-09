#include "testlib.h"

int main()
{
    registerValidation();
    int N = inf.readInt(2,5,"N");
    inf.readEoln();

    for(int i=0;i<N;i++){
		int A = inf.readInt(1,6,"A");
	    inf.readSpace();
	    int D = inf.readInt(1,6,"D");
	    inf.readEoln();
    }
    
    inf.readEof();
    return 0;
}
