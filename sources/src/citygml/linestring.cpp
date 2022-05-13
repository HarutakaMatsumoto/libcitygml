#include <citygml/linestring.h>

#include <citygml/citygmllogger.h>

#include <stdexcept>

namespace citygml

citygml::LineString::LineString(const std::string& id) : _Ring(id)
{
    m_dimensions = -1;
}

int citygml::LineString::getDimensions() const
{
    return m_dimensions;
}

const std::vector<TVec2d>& citygml::LineString::getVertices2D() const
{
    return m_vertices_2d;
}

const std::vector<DirectPosition>& citygml::LineString::getVertices3D() const
{
    return position;
}

std::vector<TVec2d>& citygml::LineString::getVertices2D()
{
    return m_vertices_2d;
}

std::vector<DirectPosition>& citygml::LineString::getVertices3D()
{
    return position;
}

void citygml::LineString::setVertices2D(const std::vector<TVec2d>& vertices)
{
    if (m_dimensions != 2) {
        setDimensions(2);
    }

    m_vertices_2d = vertices;
}

void citygml::LineString::setVertices3D(const std::vector<DirectPosition>& vertices)
{
    if (m_dimensions != 3) {
        setDimensions(3);
    }

    position = vertices;
}

void citygml::LineString::setDimensions(int dim)
{
    m_dimensions = dim;
    if (dim != 2 && !m_vertices_2d.empty()) {
        throw std::runtime_error("LineString not set to dimension 2 but contains 2D vertices.");
    } else if (dim != 3 && !position.empty()) {
        throw std::runtime_error("LineString not set to dimension 3 but contains 3D vertices.");
    }
}
}
