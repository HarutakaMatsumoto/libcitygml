#pragma once

#include <memory>

#include <citygml/object.h>
#include <citygml/envelope.h>

namespace citygml {

    class Envelope;

    class LIBCITYGML_EXPORT _Feature : public Object {
    public:
        _Feature(const std::string& gmlID);

        const Envelope& getEnvelope() const;
        void setEnvelope(Envelope* e);

        virtual ~_Feature();

    protected:
        std::unique_ptr<Envelope> m_envelope;
    };

}
