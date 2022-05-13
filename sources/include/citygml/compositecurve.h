#pragma once

#include <citygml/_curve.h>

namespace citygml {

class LIBCITYGML_EXPORT CompositeCurve : public _Curve
{
    friend class CityGMLFactory;
    
protected:
    CompositeCurve(std::string const& id = "CompositeCurve");
    
    std::vector<std::shared_ptr<_Curve>> curveMember;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const CompositeCurve& o );

}
