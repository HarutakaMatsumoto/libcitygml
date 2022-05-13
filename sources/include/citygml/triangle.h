#pragma once

#include <citygml/_surfacepatch.h>
#include <citygml/_ring.h>

namespace citygml {

class LIBCITYGML_EXPORT Triangle : public _SurfacePatch
{
    friend class CityGMLFactory;
    
protected:
    Triangle(std::string const& id = "Triangle");
    
    std::shared_ptr<_Ring> exterior;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Triangle& o );

}
