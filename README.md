# C++ data type informations
This little tool detects and prints the system data model and the size of all
fundamental data types.

## Usage
On Linux with gcc
```bash
g++ -std=c++2a -o type_information type_information.cpp
./type_information
```

## Example output
```
Data model: LP64

Type                      | Bytes
--------------------------+------
short                     | 2
short int                 | 2
signed short              | 2
signed short int          | 2
unsigned short            | 2
unsigned short int        | 2
--------------------------+------
int                       | 4
signed                    | 4
signed int                | 4
unsigned                  | 4
unsigned int              | 4
--------------------------+------
long                      | 8
long int                  | 8
signed long               | 8
signed long int           | 8
unsigned long             | 8
unsigned long int         | 8
--------------------------+------
long long                 | 8
long long int             | 8
signed long long          | 8
signed long long int      | 8
unsigned long long        | 8
unsigned long long int    | 8
--------------------------+------
size_t                    | 8
--------------------------+------
int8_t                    | 1
int16_t                   | 2
int32_t                   | 4
int64_t                   | 8
--------------------------+------
int_fast8_t               | 1
int_fast16_t              | 8
int_fast32_t              | 8
int_fast64_t              | 8
--------------------------+------
int_least8_t              | 1
int_least16_t             | 2
int_least32_t             | 4
int_least64_t             | 8
--------------------------+------
intmax_t                  | 8
--------------------------+------
intptr_t                  | 8
--------------------------+------
uint8_t                   | 1
uint16_t                  | 2
uint32_t                  | 4
uint64_t                  | 8
--------------------------+------
uint_fast8_t              | 1
uint_fast16_t             | 8
uint_fast32_t             | 8
uint_fast64_t             | 8
--------------------------+------
uint_least8_t             | 1
uint_least16_t            | 2
uint_least32_t            | 4
uint_least64_t            | 8
--------------------------+------
uintmax_t                 | 8
--------------------------+------
uintptr_t                 | 8
--------------------------+------
signed char               | 1
unsigned char             | 1
char                      | 1
wchar_t                   | 4
--------------------------+------
char8_t                   | 1
char16_t                  | 2
char32_t                  | 4
--------------------------+------
signed char               | 1
signed short int          | 2
signed int                | 4
signed long int           | 8
signed long long int      | 8
--------------------------+------
unsigned char             | 1
unsigned short int        | 2
unsigned int              | 4
unsigned long int         | 8
unsigned long long int    | 8
--------------------------+------
float                     | 4
double                    | 8
long double               | 16
```
