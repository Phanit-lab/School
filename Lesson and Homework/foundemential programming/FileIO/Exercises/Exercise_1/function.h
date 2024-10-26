#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


#ifdef INTEGER
    typedef int DataType;
    #define FillArray FillIntArray
    #define OutputArray OutputIntArray
    #define SearchMin SearchIntMin
    #define SearchMax SearchIntMax
    #define SortArray SortIntArray
    #define EditValue EditIntValue
#elif defined(DOUBLE)
    typedef double DataType;
    #define FillArray FillDoubleArray
    #define OutputArray OutputDoubleArray
    #define SearchMin SearchDoubleMin
    #define SearchMax SearchDoubleMax
    #define SortArray SortDoubleArray
    #define EditValue EditDoubleValue
#elif defined(CHAR)
    typedef char DataType;
    #define FillArray FillCharArray
    #define OutputArray OutputCharArray
    #define SearchMin SearchCharMin
    #define SearchMax SearchCharMax
    #define SortArray SortCharArray
    #define EditValue EditCharValue
#endif

#endif // FUNCTION_H
