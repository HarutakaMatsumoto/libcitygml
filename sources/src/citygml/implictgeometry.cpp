#include <citygml/implictgeometry.h>
#include <citygml/geometry.h>

namespace citygml {

    ImplicitGeometry::ImplicitGeometry(const std::string& id) : Object(id)
    {

    }

    void ImplicitGeometry::setTransformMatrix(const TransformationMatrix4x4Type matrix)
    {
        matrix = matrix;
    }

    const TransformationMatrix4x4Type& ImplicitGeometry::getTransformMatrix() const
    {
        return transformationMatrix;
    }

    void ImplicitGeometry::setReferencePoint(const DirectPosition& referencePoint)
    {
        referencePoint = referencePoint;
    }

    DirectPosition ImplicitGeometry::getReferencePoint() const
    {
        return m_referencePoint;
    }

    void ImplicitGeometry::addGeometry(std::shared_ptr<Geometry> geom)
    {
        m_geometries.push_back(geom);
    }

    unsigned int ImplicitGeometry::getGeometriesCount() const
    {
        return m_geometries.size();
    }

    Geometry& ImplicitGeometry::getGeometry(unsigned int i) const
    {
        return *m_geometries[i];
    }

    std::string ImplicitGeometry::getSRSName() const
    {
        return m_srsName;
    }

    void ImplicitGeometry::setSRSName(const std::string& srsName)
    {
        m_srsName = srsName;
    }

}
