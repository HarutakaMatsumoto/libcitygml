#pragma once

#include <citygml/_surface.h>
#include <citygml/signtype.h>

namespace citygml {

class LIBCITYGML_EXPORT OrientableSurface : _Surface
{
    friend class CityGMLFactory;
    
protected:
    OrientableSurface(std::string const& id = "OrientableSurface");
    
    std::shared_ptr<SignType> orientation;
    std::array<std::shared_ptr<_Surface>, 2> baseSurface;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const OrientableSurface& o );

}
