#ifndef APPLICATIONLAUNCHER_PLUGIN_H
#define APPLICATIONLAUNCHER_PLUGIN_H

#include <QQmlExtensionPlugin>

class ApplicationLauncherPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes(const char *uri);
};

#endif // APPLICATIONLAUNCHER_PLUGIN_H

