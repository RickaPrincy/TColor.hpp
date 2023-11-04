# TColor.hpp :art:

![Example](/image/demo.png)

`TColor` is a simple header file that provides you with options to print text in color within the terminal :smirk:

# Getting started :bulb:

"You don't need any configuration, just include the header file , `e.g., #include "TColor/TColor.hpp"`

# Example :clipboard:

```c++

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
```