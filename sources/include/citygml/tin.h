#pragma once

#include <citygml/linestring.h>
#include <citygml/triangulatedsurface.h>

namespace citygml {

class LIBCITYGML_EXPORT TIN : public TriangulatedSurface
{
    friend class CityGMLFactory;
    
protected:
    TIN(std::string const& id = "TIN");
    
    LineStringSegment stopLines;
    LineStringSegment breakLines;
    LengthType maxLength;
    posList controlPoint;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const TIN& o );

}
