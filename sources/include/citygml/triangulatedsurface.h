#pragma once

#include <citygml/surface.h>
#include <citygml/triangle.h>

namespace citygml {

class LIBCITYGML_EXPORT TriangulatedSurface : public Surface
{
    friend class CityGMLFactory;
    
protected:
    Surface(std::string const& id = "Surface");
    
    std::vector<Triangle> trianglePatches;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const Surface& o );

}
