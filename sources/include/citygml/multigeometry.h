#pragma once

#include <citygml/_abstractgeometricaggregate.h>

namespace citygml {

class LIBCITYGML_EXPORT MultiGeometry : public AbstractGeometricAggregate
{
    friend class CityGMLFactory;
    
protected:
    MultiGeometry(std::string const& id = "MultiGeometry");
    
    std::vector<std::shared_ptr<Geometry>> geometryMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const MultiGeometry& o );

}
