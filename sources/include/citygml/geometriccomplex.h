#pragma once

#include <citygml/geometry.h>
#include <citygml/_geometricprimitive.h>

namespace citygml {

class LIBCITYGML_EXPORT GeometricComplex : public Geometry
{
    friend class CityGMLFactory;
    
protected:
    GeometricComplex(std::string const& id = "GeometricComplex");
    
    std::vector<std::shared_ptr<_GeometricPrimitive>> element;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const GeometricComplex& o );

}
