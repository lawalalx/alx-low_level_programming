#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from the generated .o files
ar rc liball.a *.o

# Index the static library for easier linking
ranlib liball.a

# Clean up the .o files
rm *.o

