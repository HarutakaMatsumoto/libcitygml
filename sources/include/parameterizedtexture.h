#pragma once

#include <citygml/_Texture.h>

namespace citygml {

class LIBCITYGML_EXPORT ParametrizedTexture : public _Texture
{
    friend class CityGMLFactory;
    
protected:
    ParametrizedTexture(std::string const& id = "ParametrizedTexture");
    // TODO: Next here
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const ParametrizedTexture& o );

}
