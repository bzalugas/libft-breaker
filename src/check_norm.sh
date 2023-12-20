#!/usr/bin/env sh

RED='\033[31m'
GREEN='\033[32m'
RESET='\033[0m'

files="../libft/*.c"
files="${files} ../libft/*.h"
files="${files} ../libft/Makefile"
txtok="${GREEN}NORM OK${RESET}\n"
txtnok="${RED}NORM KO${RESET}\n"

for f in $files
do
    name=$(echo $f | rev | cut -d / -f 1 | rev)
    res=$(norminette $f)
    txt=$([ $? -eq 0 ] && echo ${txtok} || echo ${txtnok})
    printf "${name}: ${txt}"
done
