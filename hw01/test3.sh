#!/bin/bash
[ -f 3.cpp ] && echo "  *** COMPILE ***" && g++ 3.cpp -o 2 && echo "  ***   RUN   ***" && ./3 < 3.in.txt > 3.out.actual.txt && echo "  *** COMPARE ***" && diff 3.out.actual.txt 3.out.txt
pass=$?
echo "  *** RESULT  ***" 
echo "  ***************" 
if [ "$pass" -eq 0 ] 
then
    echo "    *  PASS   *"
else
     echo "     * FAIL *"
fi
