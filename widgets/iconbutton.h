#ifndef WIDGETS_ICONBUTTON_H
#define WIDGETS_ICONBUTTON_H

#include "../global.h"

#include <QAbstractButton>
#include <QPixmap>

namespace Widgets {

class QT_UTILITIES_EXPORT IconButton : public QAbstractButton {
    Q_OBJECT
    Q_PROPERTY(QPixmap pixmap READ pixmap WRITE setPixmap)

public:
    explicit IconButton(QWidget *parent = nullptr);
    ~IconButton();

    const QPixmap &pixmap() const;
    void setPixmap(const QPixmap &pixmap);
    QSize sizeHint() const;

protected:
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    QPixmap m_pixmap;
};

/*!
 * \brief Returns the pixmap.
 */
inline const QPixmap &IconButton::pixmap() const
{
    return m_pixmap;
}

/*!
 * \brief Sets the pixmap.
 */
inline void IconButton::setPixmap(const QPixmap &pixmap)
{
    m_pixmap = pixmap;
    update();
}
} // namespace Widgets

#endif // WIDGETS_ICONBUTTON_H
