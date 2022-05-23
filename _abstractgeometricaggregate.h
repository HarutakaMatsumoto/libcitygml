#pragma once

#include <citygml/geometry.h>

namespace citygml {

class LIBCITYGML_EXPORT AbstractGeometricAggregate : public Geometry
{
    friend class CityGMLFactory;
    
protected:
    AbstractGeometricAggregate(std::string const& id = "AbstractGeometricAggregate");
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const AbstractGeometricAggregate& o );

}
