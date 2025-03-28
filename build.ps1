if (Test-Path main.exe){
    del main.exe
}
if (Test-Path *.o){
    del *.o
}
cc *.c -c
cc *.o -o main -Wall -Werror -Wextra -O2 -march=native   
./main

