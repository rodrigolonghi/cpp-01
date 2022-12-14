#!/bin/bash

make && clear
BIN=ex04
echo "pineapple straberry watermelon fruit juice lemon" > test

echo -e "\e[1;32mTest 1: "a" => "b"\e[0m"
./$BIN test "a" "b" && cat test.replace
sed 's/a/b/g' test

echo

echo -e "\e[1;32mTest 2: "pineapple" => "pear"\e[0m"
./$BIN test "pineapple" "pear" && cat test.replace
sed 's/pineapple/pear/g' test

echo

echo -e "\e[1;32mTest 3: "strawberry" => "orange"\e[0m"
./$BIN test "strawberry" "orange" && cat test.replace
sed 's/strawberry/orange/g' test

echo

echo -e "\e[1;32mTest 4: "fruit" => "car"\e[0m"
./$BIN test "fruit" "car" && cat test.replace
sed 's/fruit/car/g' test

echo

echo -e "\e[1;32mTest 5: "r" => "l"\e[0m"
./$BIN test "r" "l" && cat test.replace
sed 's/r/l/g' test

echo

echo -e "\e[1;32mTest 6: "watermelon" => "watermelonTomato"\e[0m"
./$BIN test "watermelon" "watermelonTomato" && cat test.replace
sed 's/watermelon/watermelonTomato/g' test

echo

echo -e "\e[1;31mTest 7: invalid file\e[0m"
./$BIN invalid_file "fruit" "fruit" && cat test.replace
sed 's/"fruit"/"fruit"/g' invalid_file

echo

echo -e "\e[1;31mTest 8: two arguments\e[0m"
./$BIN test "fruit" && cat test.replace

echo

echo -e "\e[1;31mTest 9: four arguments\e[0m"
./$BIN test "fruit" "fruit" "fruit" && cat test.replace

echo

echo -e "\e[1;31mTest 10: "empty string" => "empty string"\e[0m"
./$BIN test "" "a" && cat test.replace
sed 's/""/""/g' test

echo

echo -e "\e[1;31mTest 11: "a" => "empty string"\e[0m"
./$BIN test "a" "" && cat test.replace
sed 's/a//g' test

echo

make fclean &>/dev/null
rm -rf test test.replace