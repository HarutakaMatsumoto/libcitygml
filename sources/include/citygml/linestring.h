#pragma once

#include <citygml/citygml_api.h>
#include <citygml/_curve.h>
#include <citygml/vecs.hpp>
#include <memory>

#include <vector>

namespace citygml {

    class CityGMLFactory;

    /**
     * @brief The LineString class implements the gml:LineString object may also be used as a container of a single gml::Point
     */
    class LIBCITYGML_EXPORT LineString : public _Curve {
        friend class CityGMLFactory;
    public:
        int getDimensions() const;

        const std::vector<TVec2d>& getVertices2D() const;
        const std::vector<DirectPosition>& getVertices3D() const;

        std::vector<TVec2d>& getVertices2D();
        std::vector<DirectPosition>& getVertices3D();

        void setVertices2D(const std::vector<TVec2d>& vertices);
        void setVertices3D(const std::vector<DirectPosition>& vertices);

        void setDimensions(int dim);

    protected:
        LineString(const std::string& id);
        std::vector<TVec2d> m_vertices_2d;
        std::vector<DirectPosition> position;
        int m_dimensions;
    };

    typedef LineString LineStringSegment; // TODO: Check the specification

}
