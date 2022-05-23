#pragma once

#include <citygml/_abstractgeometricaggregate.h>
#include <citygml/solid.h>

namespace citygml {

class LIBCITYGML_EXPORT MultiSolid : public _AbstractGeometricAggregate
{
    friend class CityGMLFactory;
    
protected:
    MultiSolid(std::string const& id = "MultiSolid");
    
    std::vector<std::shared_ptr<Solid>> solidMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const MultiSolid& o );

}
