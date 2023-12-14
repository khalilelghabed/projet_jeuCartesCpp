#ifndef MONQLABEL_H
#define MONQLABEL_H

#include <QLabel>

class MonQlabel : public QLabel
{
    Q_OBJECT
public:
    MonQlabel();

signals:
    void clicked();

private:
    void mousePressEvent(QMouseEvent *event) override;
};



#endif // MONQLABEL_H
