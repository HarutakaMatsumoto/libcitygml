#pragma once

#include <citygml/geometricprimitive.h>

namespace citygml {

    class LIBCITYGML_EXPORT _Solid : public GeometricPrimitive
    {
        friend class CityGMLFactory;
        
    protected:
        _Solid(std::string const& id = "_Solid");
    };

    LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _Solid& o );

}
