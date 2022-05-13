#pragma once

#include <vector>
#include <memory>

#include <citygml/citygml_api.h>
#include <citygml/_ring.h>
#include <citygml/vecs.hpp>

namespace citygml {

    class TextureTargetDefinition;
    class CityGMLLogger;

    class LIBCITYGML_EXPORT LinearRing : public _Ring
    {
    public:
        LinearRing( const std::string& id, bool isExterior );

        bool isExterior() const;

        unsigned int size() const;

        const std::vector<DirectPosition>& getVertices() const;
        std::vector<DirectPosition>& getVertices();
        void setVertices(std::vector<DirectPosition> vertices);

        void addVertex( const DirectPosition& v );

        DirectPosition computeNormal() const;

        void removeDuplicateVertices(const std::vector<TextureTargetDefinition*>& targets , std::shared_ptr<CityGMLLogger> logger);

        void forgetVertices();

    protected:
        bool m_exterior;

        std::vector<DirectPosition> m_vertices;
    };

}
