#include "include/TiledImageProvider.h"

namespace TiledQML {

TiledImageProvider::TiledImageProvider(QQmlImageProviderBase::ImageType type,
                                       QQmlImageProviderBase::Flags flags) :
    QQuickImageProvider(type, flags)
{
}

TiledImageProvider::~TiledImageProvider()
{
    //
}

QImage TiledImageProvider::requestImage(const QString &id,
                                        QSize *size,
                                        const QSize &requestedSize)
{
    return QImage();
}

QPixmap TiledImageProvider::requestPixmap(const QString &id,
                                          QSize *size,
                                          const QSize &requestedSize)
{
    return QPixmap();
}

QQuickTextureFactory *TiledImageProvider::requestTexture(const QString &id,
                                                         QSize *size,
                                                         const QSize &requestedSize)
{
    return Q_NULLPTR;
}
}
