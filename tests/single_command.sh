#!/bin/sh

(echo "echo test1"
sleep 2
echo "echo ls -a"
sleep 2
echo "echo mkdir TestRepository") | ../bin/rshell

