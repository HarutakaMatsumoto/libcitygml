#include <citygml/envelope.h>

#include <numeric>
#include <cmath>

#ifndef NAN
  #define NAN std::numeric_limits<double>::quiet_NaN()
#endif

#ifdef WIN32
  #define ISNAN _isnan
#else
  #define ISNAN std::isnan
#endif

namespace citygml {


    Envelope::Envelope()
    {
        m_lowerBound = DirectPosition(NAN,NAN,NAN);
        m_upperBound = DirectPosition(NAN,NAN,NAN);
    }

    Envelope::Envelope(const std::string& srsName)
    {
        m_srsName = srsName;
    }

    const DirectPosition& Envelope::getLowerBound() const
    {
        return m_lowerBound;
    }

    void Envelope::setLowerBound(const DirectPosition& coordinate)
    {
        m_lowerBound = coordinate;
    }

    const DirectPosition& Envelope::getUpperBound() const
    {
        return m_upperBound;
    }

    void Envelope::setUpperBound(const DirectPosition& coordinate)
    {
        m_upperBound = coordinate;
    }

    const std::string& Envelope::srsName() const
    {
        return m_srsName;
    }

    const bool Envelope::validBounds() const
    {
        return !(ISNAN(m_lowerBound[0]) ||  ISNAN(m_lowerBound[1]) || ISNAN(m_lowerBound[2])
                || ISNAN(m_upperBound[0]) ||  ISNAN(m_upperBound[1]) || ISNAN(m_upperBound[2]));
    }

    std::ostream& operator<<( std::ostream& os, const Envelope& e )
    {
        return os << e.getLowerBound() << " " << e.getUpperBound();
    }

}
