if (Test-Path harpy.exe){
    del harpy.exe
}
if (Test-Path *.o){
    del *.o
}
cc ./src/*.c -c
cc *.o -o harpy -Wall -Werror -Wextra -O2 -march=native   
./harpy

