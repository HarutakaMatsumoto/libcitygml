#pragma once

#include <citygml/_solid.h>

namespace citygml {

    class LIBCITYGML_EXPORT CompositeSolid : public _Solid
    {
        friend class CityGMLFactory;
        
    protected:
        CompositeSolid(std::string const& id = "CompositeSolid");
        
        std::vector<std::shared_ptr<_Solid>> solidMember;
    };

    LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const CompositeSolid& o );

}
