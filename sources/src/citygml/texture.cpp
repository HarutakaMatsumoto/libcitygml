#include <citygml/texture.h>
#include <citygml/utils.h>

namespace citygml {

    Texture::Texture(const std::string& id) : Appearance( id, "Texture" ), m_repeat( false ), wrapMode( WrapModeType::WM_NONE )
    {

    }

    Texture::Texture(const std::string& id, const std::string& type) : Appearance( id, type ), m_repeat( false ), wrapMode( WrapModeType::WM_NONE )
    {

    }

    std::string Texture::getUrl() const
    {
        return imageURI;
    }

    void Texture::setUrl(const std::string& url)
    {
        imageURI = url;
    }

    bool Texture::getRepeat() const
    {
        return m_repeat;
    }

    Texture::WrapModeType Texture::getWrapMode() const
    {
        return wrapMode;
    }

    void Texture::setWrapMode(Texture::WrapModeType mode)
    {
        wrapMode = mode;
    }

    bool Texture::setWrapModeFromString(std::string wrapMode)
    {
        if ( ci_string_compare( wrapMode, "wrap" ) ) {
            this->setWrapMode(Texture::WrapModeType::WM_WRAP);
        }
        else if ( ci_string_compare( wrapMode, "mirror" ) ) {
            this->setWrapMode(Texture::WrapModeType::WM_MIRROR);
        }
        else if ( ci_string_compare( wrapMode, "clamp" ) ) {
            this->setWrapMode(Texture::WrapModeType::WM_CLAMP);
        }
        else if ( ci_string_compare( wrapMode, "border" ) ) {
            this->setWrapMode(Texture::WrapModeType::WM_BORDER);
        }
        else if ( ci_string_compare( wrapMode, "none" ) ) {
            this->setWrapMode(Texture::WrapModeType::WM_NONE);
        }
        else {
            return false;
        }

        return true;
    }

    TVec4f Texture::getBorderColor() const
    {
        return m_borderColor;
    }

    void Texture::setBorderColor(TVec4f color)
    {
        m_borderColor = color;
    }

    std::string Texture::toString() const
    {
        return Appearance::toString() + " (url: " + m_url + ")";
    }

    std::shared_ptr<Texture> Texture::asTexture()
    {
        return std::static_pointer_cast<Texture>(shared_from_this());
    }

    std::shared_ptr<const Texture> Texture::asTexture() const
    {
        return std::static_pointer_cast<const Texture>(shared_from_this());
    }

    Texture::~Texture()
    {
    }


}
