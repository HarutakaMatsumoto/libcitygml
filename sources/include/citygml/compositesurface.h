#pragma once

#include <citygml/_surface.h>

namespace citygml {

class LIBCITYGML_EXPORT CompositeSurface : public _Surface
{
    friend class CityGMLFactory;
    
protected:
    CompositeSurface(std::string const& id = "CompositeSurface");
    
    std::vector<std::shared_ptr<_Surface>> surfaceMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const CompositeSurface& o );

}
