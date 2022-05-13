#pragma once

#include <citygml/_geometricprimitive.h>

namespace citygml {

    class LIBCITYGML_EXPORT Point : public _GeometricPrimitive
    {
        friend class CityGMLFactory;
        
    protected:
        Point(std::string const& id = "Point");
        
        DirectPosition position;
    };

    LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Point& o );

}
