#include <TColor/TColor.hpp>
#include <map>
#include <string>

using namespace TColor;

static std::map<Color,std::string> colors_value = {

};

std::string getColorValue(Color color){
    return colors_value.at(color);
}