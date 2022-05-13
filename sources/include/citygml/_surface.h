#pragma once

#include <citygml/_geometricprimitive.h>

namespace citygml {

    class LIBCITYGML_EXPORT _Surface : public _GeometricPrimitive
    {
        friend class CityGMLFactory;
        
    protected:
        _Surface(std::string const& id = "_Surface");
    };

    LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _Surface& o );

}
