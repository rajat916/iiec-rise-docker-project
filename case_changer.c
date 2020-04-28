#!/bin/sh

ARG=$1
shift

if [ "$ARG" == "--comparison" ]
then
    gcc -o sort_comparison sort_comparison.c
    ./sort_comparison
elif [ "$ARG" == "--case-changer" ]
then
    gcc -o case_changer case_changer.c
    ./case_changer "$1"
else
    gcc -o hello hello.c
    ./hello
fi
