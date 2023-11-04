#ifndef __TCOLOR_COLORS__
#define __TCOLOR_COLORS__

    #include <iostream>

    namespace TColor{
        enum class Color{
            black,
            red,
            green,
            yellow,
            blue,
            magenta,
            cyan,
            white,
            b_black,
            b_red,
            b_green,
            b_yellow,
            b_blue,
            b_magenta,
            b_cyan,
            b_white
        };

        template <typename T>
        std::ostream write(Color color, T &input){
            return std::cout << getColorValue(color) <<  input;
        }

        template <typename T>
        std::ostream write(T &input){
            return std::cout << getColorValue(Color::white) <<  input;
        }
        
        template <typename T>
        std::ostream write_endl(Color color, T &input){
            return std::cout << getColorValue(color) <<  input << std::endl;
        }

        template <typename T>
        std::ostream write_endl(T &input){
            return std::cout << getColorValue(Color::white) <<  input << std::endl;
        }

        static void getColorValue(Color);
    }
#endif