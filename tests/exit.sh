#!/bin/sh

(echo "exit"
sleep 2
echo "echo hi; exit") | ../bin/rshell
