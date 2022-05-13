#pragma once

#include <citygml/object.h>

namespace citygml {

class LIBCITYGML_EXPORT _SurfacePatch : public Object
{
    friend class CityGMLFactory;
    
protected:
    _SurfacePatch(std::string const& id = "_SurfacePatch");
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _SurfacePatch& o );

}
