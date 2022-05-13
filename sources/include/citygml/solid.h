#pragma once

#include <citygml/_solid.h>
#include <citygml/_surface.h>

namespace citygml {

class LIBCITYGML_EXPORT Solid : public _Solid
{
    friend class CityGMLFactory;
    
protected:
    Solid(std::string const& id = "Solid");
    
    std::vector<std::shared_ptr<_Surface>> interior;
    std::vector<std::shared_ptr<_Surface>> exterior;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Solid& o );

}
