#pragma once

#include <citygml/object.h>

namespace citygml {

class LIBCITYGML_EXPORT _Ring : public Object
{
    friend class CityGMLFactory;
    
protected:
    _Ring(std::string const& id = "_Ring");
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const _Ring& o );

}
