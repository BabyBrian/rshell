#!/bin/sh

(echo "echo test1 #comment1"
sleep 2
echo "echo hi #1; echo hu #comment3") | ../bin/rshell
