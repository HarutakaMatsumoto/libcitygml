#pragma once

#include <citygml/object.h>

namespace citygml {

class LIBCITYGML_EXPORT CodeType : public Object
{
    friend class CityGMLFactory;
    
protected:
    CodeType(std::string const& id = "CodeType");
    
    string name;
    std::shared_ptr<anyURI> codeSpace;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const CodeType& o );

}
