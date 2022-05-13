#pragma once

#include <citygml/geometry.h>

namespace citygml {

    class LIBCITYGML_EXPORT _GeometricPrimitive : public Geometry
    {
        friend class CityGMLFactory;
        
    protected:
        _GeometricPrimitive(std::string const& id = "_GeometricPrimitive");
    };

    LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _GeometricPrimitive& o );

}
