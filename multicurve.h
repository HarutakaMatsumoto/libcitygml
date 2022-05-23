#pragma once

#include <citygml/_abstractgeometricaggregate.h>

namespace citygml {

class LIBCITYGML_EXPORT MultiCurve : public _AbstractGeometricAggregate
{
    friend class CityGMLFactory;
    
protected:
    MultiCurve(std::string const& id = "MultiCurve");
    
    std::vector<std::shared_ptr<Curve>> curveMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const MultiCurve& o );

}
