#pragma once

#include <citygml/object.h>

namespace citygml {

class LIBCITYGML_EXPORT Color : public Object
{
    friend class CityGMLFactory;
    
protected:
    Color(std::string const& id = "Color");
    
    std::array<doubleBetween0and1, 3> rgbValues
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Color& o );

}
