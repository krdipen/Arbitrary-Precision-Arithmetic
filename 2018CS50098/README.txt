I have created 7 different c files for seven arithmetic operations which later,
I used to create library arbprecision-

    1. add.c- This has Add function with return type char* and take two
    arguments. It has one static field answer whose pointer is returned when
    this function is called.

    1. sub.c- This has Sub function with return type char* and take two
    arguments. It has one static field answer whose pointer is returned when
    this function is called.

    3. mul.c- This has Mul function with return type char* and take two
    arguments. It has one static field answer whose pointer is returned when
    this function is called. Implemented long multiplication. repeated addition
    and shifting.

    4. div.c- This has Div function with return type char* and take two
    arguments. It has one static field answer whose pointer is returned when
    this function is called. Implemented long division. repeated subtraction
    and shifting.

    5. abs.c- This has Abs function with return type char* and take one
    argument. It has one static field answer whose pointer is returned when
    this function is called.

    6. pow.c- This has Pow function with return type char* and take two
    arguments. It has one static field answer whose pointer is returned when
    this function is called.

    7. sqrt.c- This has Sqrt function with return type char* and take one
    argument. It has one static field answer whose pointer is returned when
    this function is called.

I created object file of these above mentioned file and created library from
arbprecision from them. I have also created a header file arbprecision.h for
arbprecision library.

mainfile.c- This has main function in it where file is read and according to
the command different functions are called over the one or two operands in file.
The answer returned by these functions are written in another file.

I have created 5 different c files for five different arithmetic operations for
complex number.

    1. addcpx.c- This take two complex numbers. Add these two complex numbers
    using Add() from arbprecision library. Real and imaginary part are
    separately added and resulten complex number is returned.

    2. subcpx.c- This take two complex numbers. Subtract these two complex
    numbers using Sub() from arbprecision library. Real and imaginary part are
    separately subtracted and resulten complex number is returned.

    3. mulcpx.c- return the product of the two passed complex numbers using
    arbprecision library.

    4. divcpx.c- return the result after dividing the first complex number from
    another using arbprecision library.

    5. abscpx.c- return the modulus of the complex number using arbprecision
    library.

Since we have to compare run time of ADD, SUB, PROD, QUOT and ABS from one
computed using arbprecision and another from standard C library. I have created
another 5 different c files for the same five arithmetic operations on Complex
number, but these files don't use arbprecision rather it uses standard C
library which is complex.h
    1. addstd.c
    2. substd.c
    3. mulstd.c
    4. divstd.c
    5. absstd.c

I have measured the time taken by each of these five arithmetic operations i.e.
addcpx, subcpx, mulcpx, divcpx, abscpx and also its standard C library counter
part i.e. addstd, substd, mulstd, divstd, absstd.

I have noted the data in a .txt file named "data.txt" which I later used after
all operations are performed to plot bar graph from "data.txt". I have printed
bar graph in a .png file named "plot.png".

For each operation given in the input file, I will plot its operation time
using arbprecision and also using standard C library in milisecond.
