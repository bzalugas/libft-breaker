#!/usr/bin/env sh

ANSI_COLOR_RED='\033[31m'
ANSI_COLOR_GREEN='\033[32m'
ANSI_COLOR_RESET='\033[0m'

files="../libft/*"
ok=1

for f in $files
do
    res=$(norminette $f)
    if [ $? -ne 0 ]; then
        ok=0
        echo $res
    fi
done
if [ $ok -eq 1 ]; then
    echo -e "${ANSI_COLOR_GREEN}NORM OK${ANSI_COLOR_RESET}"
else
    echo -e "$ANSI_COLOR_RED CHECK YOUR NORM $ANSI_COLOR_RESET"
fi
