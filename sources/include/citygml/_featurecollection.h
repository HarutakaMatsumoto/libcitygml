#pragma once

#include <citygml/_feature.h>

namespace citygml {

class LIBCITYGML_EXPORT _FeatureCollection : public _Feature
{
    friend class CityGMLFactory;
    
protected:
    _FeatureCollection(std::string const& id = "_FeatureCollection");
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _FeatureCollection& o );

}
