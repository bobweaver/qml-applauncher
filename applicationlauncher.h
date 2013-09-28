#ifndef APPLICATIONLAUNCHER_H
#define APPLICATIONLAUNCHER_H

#include <QQuickItem>

class ApplicationLauncher : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(ApplicationLauncher)
    
public:
    ApplicationLauncher(QQuickItem *parent = 0);
    ~ApplicationLauncher();
};

QML_DECLARE_TYPE(ApplicationLauncher)

#endif // APPLICATIONLAUNCHER_H

