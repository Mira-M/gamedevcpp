#include <iostream>
using namespace std;

template < class Sumtype, class Averagetype >
Averagetype Average ( Sumtype* p_array, Averagetype p_count )
{
    int index;
    Sumtype sum = 0;

    for ( index = 0; p_count > index; index++ )
    {
        sum += p_array[index];
    }

    return (Averagetype)sum / p_count;
}

int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Average( array, 10 ) = " << Average(array, 10) << endl;
    cout << "Average( array, 10.0f ) = " << Average(array, 10.0f) << endl;

    return 0;
}
