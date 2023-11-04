#include "include/TColor/TColor.hpp"
#include <iostream>

using namespace TColor;

int main(int argc, char const *argv[]){
    write(BLUE, "Hello world ");
    write(RED, "WOW, I'm red ");
    write_endl(YELLOW, "I'm a yellow");
    write_endl(B_GREEN, "I'm a bold green");
    write_endl(B_MAGENTA, "HELLO FROM BOLD MAGENTA");
    
    return 0;
}