#include <iostream>

using namespace std;

int SumIntegers( int* p_array, int p_count)
{
    int index;
    int sum = 0;

    for ( index = 0; index < p_count; index++ )
    {
        sum += p_array[index];
    }
    return sum;
}

int SumFloats ( float* p_array, int p_count)
{
    int index;
    float sum = 0.0f;

    for ( index = 0; index < p_count; index++)
    {
        sum += p_array[index];
    }
    return sum;
}


template < class T >
T Sum( T* p_array, int p_count)
{
    int index;
    T sum = 0;

    for (index = 0; index < p_count; index++)
    {
        sum += p_array[index];
    }

    return sum;
}

int main()
{
    int intarray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float floatarray[9] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f};

    //first sum the two arrays using the non-templated functions.
    cout << "Using SumIntegers, the sum of int array is: ";
    cout << SumIntegers( intarray, 10) << endl;
    cout << "Using SumFloats, the sum of floatarray is: ";
    cout << SumFloats( floatarray, 9) << endl;

    //Now sum the two arrays using the templated function
    cout << "Using Sum, the sum of intarray is: ";
    cout << Sum( intarray, 10) << endl;
    cout << "Using Sum, the sum of floatarray is: ";
    cout << Sum( floatarray, 9) << endl;

    return 0;
}
