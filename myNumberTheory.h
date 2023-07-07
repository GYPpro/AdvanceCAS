#include <math.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class myInt{

};

template <class T>
class myPair{
public:
    T a,b;

public:
    pair(T _a,T _b)
    {
        a = _a;
        b = _b;
    };
    pair()
    {
        a = 0;
        b = 0;    
    };
    bool operator==(pair c)
    {
        if(a != c.a) return false;
        if(b != c.b) return false;
    }

};