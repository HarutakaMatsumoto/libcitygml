#pragma once

#include <citygml/_ring.h>
#include <citygml/_surfacepatch.h>

namespace citygml {

class LIBCITYGML_EXPORT Rectangle : public _SurfacePatch
{
    friend class CityGMLFactory;
    
protected:
    Rectangle(std::string const& id = "Rectangle");
    
    std::shared_ptr<_Ring> exterior;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Rectangle& o );

}
