#include <iostream>
#include "adder.h"
#include "floatadder.h"
#include "intadder.h"

using namespace std;

int main()
{
    IntAdder iadder1;
    Adder<int> iadder2;
    FloatAdder fadder1;
    Adder<float> fadder2;

    int i;
    float f;

    for ( i = 0, f = 0.0f; i < 10; i++, f += 1.1f )
    {
        iadder1.Add( i );
        iadder2.Add( i );
        fadder1.Add( f );
        fadder2.Add( f );
    }

    cout << "The integer sum using an IntAdder: " << iadder1.Sum() << endl;
    cout << "The inter sum using an Adder: " << iadder2.Sum() << endl;
    cout << "The float sum using FloatAdder: " << fadder1.Sum() << endl;
    cout << "The float sum using an Adder: " << fadder2.Sum() << endl;

    return 0;
}
