#!/bin/sh

(echo "test -e /test/file/path"
sleep 2
#shows flag -e
echo "[ -e /home ] && echo multi commands still works"
#shows test with operators
sleep 2
echo "test -f /home../rshell.cpp"
#shows flag -f
sleep 2
echo "[ -f /home../rshell.cpp ] || echo an error occured"
sleep 2
echo "(test -d /home) || (echo hi)"
#Shows test integration into full rshell
sleep 2
echo "[ -d /home ]"
#shows flag -d and [] support
sleep 2) | ./bin/rshell
