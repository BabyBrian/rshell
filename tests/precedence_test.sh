#!/bin/sh

(echo "echo A && echo B || echo C && echo D"
sleep 2
echo "(echo A && echo B) || (echo C && echo D)"
#shows precedence operators
sleep 2
echo "test -f /home../rshell.cpp && (echo C && echo D)"
#shows precedence operators work with test and full rshell
sleep 2) | ./bin/rshell
