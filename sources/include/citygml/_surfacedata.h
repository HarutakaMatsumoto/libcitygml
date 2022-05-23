#pragma once

#include <citygml/_feature.h>

namespace citygml {

class LIBCITYGML_EXPORT _SurfaceData : public _Fature
{
    friend class CityGMLFactory;
    
protected:
    _SurfaceData(std::string const& id = "_SurfaceData");
    
    boolean isFront = true;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _SurfaceData& o );

}
