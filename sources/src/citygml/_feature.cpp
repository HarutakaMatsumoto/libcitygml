#include <citygml/_feature.h>

#include <citygml/envelope.h>

namespace citygml {

    _Feature::_Feature(const std::string& gmlID) : Object(gmlID)
    {
        setEnvelope(new Envelope());
    }

    const Envelope& _Feature::getEnvelope() const
    {
        return *m_envelope;
    }

    void _Feature::setEnvelope(Envelope* e)
    {
        m_envelope = std::unique_ptr<Envelope>(e);
    }

    _Feature::~_Feature()
    {

    }

}
