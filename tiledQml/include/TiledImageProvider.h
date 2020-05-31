#ifndef TILEDIMAGEPROVIDER_H
#define TILEDIMAGEPROVIDER_H

#include "TiledQml_global.h"
#include <QQuickImageProvider>
#include <QObject>

//"image://myimageprovider/tilesetName/tileName"

namespace TiledQML {

class TILEDQML_EXPORT TiledImageProvider : public QQuickImageProvider
{
public:
    TiledImageProvider(QQmlImageProviderBase::ImageType type,
                       QQmlImageProviderBase::Flags flags = Flags());
    ~TiledImageProvider() Q_DECL_OVERRIDE;

    virtual QImage requestImage(const QString &id,
                                QSize *size,
                                const QSize &requestedSize) Q_DECL_OVERRIDE;
    virtual QPixmap requestPixmap(const QString &id,
                                  QSize *size,
                                  const QSize &requestedSize) Q_DECL_OVERRIDE;
    virtual QQuickTextureFactory *requestTexture(const QString &id,
                                                 QSize *size,
                                                 const QSize &requestedSize) Q_DECL_OVERRIDE;

};
}
#endif // TILEDIMAGEPROVIDER_H
