#!/bin/bash

clear

echo "--- Inicio correcao C01 ---"
echo " "
echo "--- Verificacao de Arquivos ---"

find .

echo "-------------------------------"
echo "-------------------------------"

cd ./ex00
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex01
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex02
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex03
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex04
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex05
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex06
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex07
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "-------------------------------"
echo "-------------------------------"

cd ./ex08
gcc -Wall -Werror -Wextra *.c
./a.out
cd ..

echo "==============================="
echo "============ FIM =============="
echo "==============================="
