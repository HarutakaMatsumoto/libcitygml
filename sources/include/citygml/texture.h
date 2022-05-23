#pragma once

#include <optional>
#include <string>

#include <citygml/citygml_api.h>
#include <citygml/codetype.h>
#include <citygml/_surfacedata.h>
#include <citygml/vecs.hpp>

namespace citygml {

    class CityGMLFactory;

    class LIBCITYGML_EXPORT Texture : public _SurfaceData
    {
        friend class CityGMLFactory;
    public:
        enum class WrapModeType
        {
            WM_NONE,        // the resulting color is fully transparent
            WM_WRAP,        // the texture is repeated
            WM_MIRROR,      // the texture is repeated and mirrored
            WM_CLAMP,       // the texture is clamped to its edges
            WM_BORDER       // the resulting color is specified by the borderColor element (RGBA)
        };

        std::string getUrl() const;

        void setUrl(const std::string& url);

        bool getRepeat() const;

        WrapModeType getWrapMode() const;
        void setWrapMode(WrapModeType mode);

        /**
         * @brief tries to interpret the string as a WrapMode. Does nothing on failure.
         * @param wrapMode the string e.g. ("WM_NONE")
         * @return true if the string could be interpreted as a WrapMode, false otherwise
         */
        bool setWrapModeFromString(std::string wrapMode);

        ColorPlusOpacity getBorderColor() const;
        void setBorderColor(ColorPlusOpacity color);

        std::string toString() const override;

        virtual std::shared_ptr<Texture> asTexture() override;
        virtual std::shared_ptr<const Texture> asTexture() const override;

        virtual ~Texture();

    protected:
        Texture( const std::string& id );
        Texture( const std::string& id, const std::string& type );
        
        anyURI imageURI;
        std::optional<CodeType> mimeType;
        std::optional<TextureType> textureType;
        bool m_repeat;
        std::optional<WrapModeType> wrapMode;
        std::optional<ColorPlusOpacity> borderColor;
    };

}
