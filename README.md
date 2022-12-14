
# 42Printf
As part of 42's program, we were asked to recreate the printf function. It becomes our first interaction with variadic functions which are instrumental for printf to work.

Compared to the original printf function, my reproduction is not exhaustive. It includes the following conversions:
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.

It excludes the field minimum width under all conversions of the original function and the following flags "-0", "# +".

All the best, G!