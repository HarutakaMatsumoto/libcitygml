#pragma once

#include <citygml/_geometricprimitive.h>

namespace citygml {

class LIBCITYGML_EXPORT _Curve : _GeometricPrimitive
{
    friend class CityGMLFactory;
    
protected:
    _Curve(std::string const& id = "_Curve");
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _Curve& o );

}
