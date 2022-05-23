#pragma once

#include <citygml/_feature.h>

namespace citygml {

    class LIBCITYGML_EXPORT RectifiedGridCoverage : public _Feature
    {
        friend class CityGMLFactory;
        
    protected:
        RectifiedGridCoverage(std::string const& id = "RectifiedGridCoverage");
    };

    LIBCITYGML_EXPORT std::ostream& operator<<( std::ostream& os, const RectifiedGridCoverage& o );

}

