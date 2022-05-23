#pragma once

#include <citygml/object.h>
#include <memory>

namespace citygml {
    class LIBCITYGML_EXPORT TransformationMatrix4x4Type : public Object
    {
    public:
        TransformationMatrix4x4Type();


        TransformationMatrix4x4Type(double* matrix);


        const double* getMatrix() const;
        const double* getTransposedMatrix() const;

        ~TransformationMatrix4x4Type();


    protected:
        doubleList m_matrix[16];
        double m_transposedMatrix[16];
    };
}
