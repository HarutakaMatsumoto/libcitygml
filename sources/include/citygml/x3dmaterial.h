#pragma once

#include <citygml/_surfacedata.h>

namespace citygml {

class LIBCITYGML_EXPORT X3DMaterial : public _SurfaceData
{
    friend class CityGMLFactory;
    
protected:
    X3DMaterial(std::string const& id = "X3DMaterial");
    
    std::optional<doubleBetween0and1> ambientIntensity;
    std::optional<Color> diffuseColor;
    std::optional<Color> emissiveColor;
    std::optional<Color> specularColor;
    std::optional<doubleBetween0and1> shininess;
    std::optional<doubleBetween0and1> transparency;
    std::optional<boolean> isSmooth;
    std::vector<anyURI> target;
};

LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const X3DMaterial& o );

}
