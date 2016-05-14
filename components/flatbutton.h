#ifndef FLATBUTTON_H
#define FLATBUTTON_H

#include <QPushButton>
#include <QScopedPointer>

class FlatButtonPrivate;

class FlatButton : public QPushButton
{
    Q_OBJECT

public:
    explicit FlatButton(QWidget *parent = 0);
    explicit FlatButton(const QString &text, QWidget *parent = 0);
    ~FlatButton();

protected:
    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void enterEvent(QEvent *event) Q_DECL_OVERRIDE;
    void leaveEvent(QEvent *event) Q_DECL_OVERRIDE;

    const QScopedPointer<FlatButtonPrivate> d_ptr;

private:
    Q_DISABLE_COPY(FlatButton)
    Q_DECLARE_PRIVATE(FlatButton)
};

#endif // FLATBUTTON_H
