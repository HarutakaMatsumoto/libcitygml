#pragma once

#include <citygml/_abstractgeometricaggregate.h>

namespace citygml {

class LIBCITYGML_EXPORT MultiPoint : public _AbstractGeometricAggregate
{
    friend class CityGMLFactory;
    
protected:
    MultiPoint(std::string const& id = "MultiPoint");
    
    std::vector<std::shared_ptr<Point>> pointMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const MultiPoint& o );

}
