#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::left;
using std::setfill;

#include <string>
using std::string;


string GetDataModel();

template<typename T>
void PrintRow(const string &firstColumn, const T &secondColumn);

void PrintSeperator();


int main()
{
    cout << left;

    /* Data model */
    cout << "Data model: " << GetDataModel() << endl << endl;

    /* Table header */
    PrintRow("Type", "Bytes");
    PrintSeperator();

    /* Integer types */
    PrintRow("short", sizeof(short));
    PrintRow("short int", sizeof(short int));
    PrintRow("signed short", sizeof(signed short));
    PrintRow("signed short int", sizeof(signed short int));
    PrintRow("unsigned short", sizeof(unsigned short));
    PrintRow("unsigned short int", sizeof(unsigned short int));

    PrintSeperator();

    PrintRow("int", sizeof(int));
    PrintRow("signed", sizeof(signed));
    PrintRow("signed int", sizeof(signed int));
    PrintRow("unsigned", sizeof(unsigned));
    PrintRow("unsigned int", sizeof(unsigned int));

    PrintSeperator();

    PrintRow("long", sizeof(long));
    PrintRow("long int", sizeof(long int));
    PrintRow("signed long", sizeof(signed long));
    PrintRow("signed long int", sizeof(signed long int));
    PrintRow("unsigned long", sizeof(unsigned long));
    PrintRow("unsigned long int", sizeof(unsigned long int));

    PrintSeperator();

    PrintRow("long long", sizeof(long long));
    PrintRow("long long int", sizeof(long long int));
    PrintRow("signed long long", sizeof(signed long long));
    PrintRow("signed long long int", sizeof(signed long long int));
    PrintRow("unsigned long long", sizeof(unsigned long long));
    PrintRow("unsigned long long int", sizeof(unsigned long long int));

    PrintSeperator();

    PrintRow("size_t", sizeof(size_t));

    PrintSeperator();

    /* Fixed width integer types */
#if __cplusplus > 199711L
    PrintRow("int8_t", sizeof(int8_t));
    PrintRow("int16_t", sizeof(int16_t));
    PrintRow("int32_t", sizeof(int32_t));
    PrintRow("int64_t", sizeof(int64_t));

    PrintSeperator();

    PrintRow("int_fast8_t", sizeof(int_fast8_t));
    PrintRow("int_fast16_t", sizeof(int_fast16_t));
    PrintRow("int_fast32_t", sizeof(int_fast32_t));
    PrintRow("int_fast64_t", sizeof(int_fast64_t));

    PrintSeperator();

    PrintRow("int_least8_t", sizeof(int_least8_t));
    PrintRow("int_least16_t", sizeof(int_least16_t));
    PrintRow("int_least32_t", sizeof(int_least32_t));
    PrintRow("int_least64_t", sizeof(int_least64_t));

    PrintSeperator();

    PrintRow("intmax_t", sizeof(intmax_t));

    PrintSeperator();

    PrintRow("intptr_t", sizeof(intptr_t));

    PrintSeperator();

    PrintRow("uint8_t", sizeof(uint8_t));
    PrintRow("uint16_t", sizeof(uint16_t));
    PrintRow("uint32_t", sizeof(uint32_t));
    PrintRow("uint64_t", sizeof(uint64_t));

    PrintSeperator();

    PrintRow("uint_fast8_t", sizeof(uint_fast8_t));
    PrintRow("uint_fast16_t", sizeof(uint_fast16_t));
    PrintRow("uint_fast32_t", sizeof(uint_fast32_t));
    PrintRow("uint_fast64_t", sizeof(uint_fast64_t));

    PrintSeperator();

    PrintRow("uint_least8_t", sizeof(uint_least8_t));
    PrintRow("uint_least16_t", sizeof(uint_least16_t));
    PrintRow("uint_least32_t", sizeof(uint_least32_t));
    PrintRow("uint_least64_t", sizeof(uint_least64_t));

    PrintSeperator();

    PrintRow("uintmax_t", sizeof(uintmax_t));

    PrintSeperator();

    PrintRow("uintptr_t", sizeof(uintptr_t));

    PrintSeperator();
#endif

    /* Character types */
    PrintRow("signed char", sizeof(signed char));
    PrintRow("unsigned char", sizeof(unsigned char));
    PrintRow("char", sizeof(char));
    PrintRow("wchar_t", sizeof(wchar_t));

    PrintSeperator();

#if __cplusplus > 201703L
    PrintRow("char8_t", sizeof(char8_t)); // C++20
#endif
#if __cplusplus > 199711L
    PrintRow("char16_t", sizeof(char16_t)); // C++11
    PrintRow("char32_t", sizeof(char32_t)); // C++11
    PrintSeperator();
#endif

    PrintRow("signed char", sizeof(signed char));
    PrintRow("signed short int", sizeof(signed short int));
    PrintRow("signed int", sizeof(signed int));
    PrintRow("signed long int", sizeof(signed long int));
    PrintRow("signed long long int", sizeof(signed long long int));

    PrintSeperator();

    PrintRow("unsigned char", sizeof(unsigned char));
    PrintRow("unsigned short int", sizeof(unsigned short int));
    PrintRow("unsigned int", sizeof(unsigned int));
    PrintRow("unsigned long int", sizeof(unsigned long int));
    PrintRow("unsigned long long int", sizeof(unsigned long long int));

    PrintSeperator();

    /* Floating point types */
    PrintRow("float", sizeof(float));
    PrintRow("double", sizeof(double));
    PrintRow("long double", sizeof(long double));
}

string GetDataModel()
{
    size_t shortSize = sizeof(short);
    size_t intSize = sizeof(int);
    size_t longSize = sizeof(long);
    size_t pointerSize = sizeof(void*);

    if (intSize == 2 && longSize == 4 && pointerSize == 2)
    {
        return "IP16";
    }
    else if (intSize == 2 && longSize == 4 && pointerSize == 4)
    {
        return "LP32";
    }
    else if (intSize == 4 && longSize == 4 && pointerSize == 4)
    {
        return "ILP32";
    }
    else if (intSize == 4 && longSize == 4 && pointerSize == 8)
    {
        return "LLP64";
    }
    else if (intSize == 4 && longSize == 8 && pointerSize == 8)
    {
        return "LP64";
    }
    else if (shortSize == 2 && intSize == 8 && longSize == 8 && pointerSize == 8)
    {
        return "ILP64";
    }
    else if (shortSize == 8 && intSize == 8 && longSize == 8 && pointerSize == 8)
    {
        return "SILP64";
    }
    else
    {
        return "unknown";
    }
}

template<typename T>
void PrintRow(const string &firstColumn, const T &secondColumn)
{
    cout << setw(25) << firstColumn << " | " << secondColumn << endl;
}

void PrintSeperator()
{
    cout << setfill('-') << setw(26) << "" << setw(7) << "+" << endl;
    cout << setfill(' ');
}