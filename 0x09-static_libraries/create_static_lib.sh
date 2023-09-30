#!/bin/bash
gcc -wall -pedanctic -Werror -Wextra -c *.c
ar -rc liball.a *.c
ranlib liball.a
