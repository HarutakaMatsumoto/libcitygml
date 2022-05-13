#pragma once

#include <citygml/_surface.h>
#include <citygml/_surfacepatch.h>

namespace citygml {

class LIBCITYGML_EXPORT Surface : public _Surface
{
    friend class CityGMLFactory;
    
protected:
    Surface(std::string const& id = "Surface");
    
    std::vector<_SurfacePatch> patches;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Surface& o );

}
