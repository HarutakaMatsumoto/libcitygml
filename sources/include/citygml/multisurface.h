#pragma once

#include <citygml/_abstractgeometricaggregate.h>
#include <citygml/surface.h>

namespace citygml {

class LIBCITYGML_EXPORT MultiSurface : public Object
{
    friend class CityGMLFactory;
    
protected:
    MultiSurface(std::string const& id = "MultiSurface");
    
    std::vector<std::shared_ptr<Surface>> surfaceMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const MultiSurface& o );

}
