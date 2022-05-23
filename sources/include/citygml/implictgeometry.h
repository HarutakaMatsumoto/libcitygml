#pragma once

#include <vector>
#include <memory>
#include <optional>

#include <citygml/codetype.h>
#include <citygml/object.h>
#include <citygml/transformmatrix.h>
#include <citygml/vecs.hpp>

namespace citygml {

    class Geometry;
    class CityGMLFactory;

    class LIBCITYGML_EXPORT ImplicitGeometry : public Object
    {
        friend class CityGMLFactory;
    public:
        void setTransformMatrix(const TransformationMatrix4x4Type matrix);
        const TransformationMatrix4x4Type& getTransformMatrix() const;

        void setReferencePoint(const DirectPosition& referencePoint);
        DirectPosition getReferencePoint() const;

        void addGeometry(std::shared_ptr<Geometry> geom);

        // Get the number of geometries contains in the object
        unsigned int getGeometriesCount() const;

        // Access the geometries
        Geometry& getGeometry( unsigned int i ) const;

        // Access the srs of the implicit geometry
        std::string getSRSName() const;
        void setSRSName(const std::string& srsName);

    protected:
        ImplicitGeometry(const std::string& id);

        CodeType mimeType;
        TransformationMatrix4x4Type     transformationMatrix;
        anyURI libraryObject;
        std::shared_ptr<DirectPosition>                   referencePoint;
        std::optional<std::shared_ptr<Geometry> >   relativeGMLGeometry;
//        std::string              m_srsName;
    };
}
