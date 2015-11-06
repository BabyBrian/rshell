#!/bin/sh

(echo "echo test1; echo test2"
sleep 2
echo "echo ls -a && echo multiple command"
sleep 2
echo "ech hi || echo hu") | ../bin/rshell
