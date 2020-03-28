#! /bin/bash

filename=$1
compiledFileName=$2

mkdir -p bin

excecutablePath=./bin/$compiledFileName

gcc -o $excecutablePath $filename
./$excecutablePath