#ifndef QOMPOTER_QUERY_H
#define QOMPOTER_QUERY_H

#include <QString>

namespace Qompoter {
class Query
{
public:
    Query();

    const QString &getAction() const;
    void setAction(const QString &action);

    const bool &isVerbose() const;
    void setVerbose(const bool &verbose);

    const QString &getQompoterFile() const;
    void setQompoterFile(const QString &qompoterFile);

    const QString &getWorkingDir() const;
    void setWorkingDir(const QString &workingDir);

    const QString &getVendorDir() const;
    void setVendorDir(const QString &vendorDir);

private:
    QString _action;
    bool _verbose;
    QString _qompoterFile;
    QString _workingDir;
    QString _vendorDir;
};
}

#endif // QOMPOTER_QUERY_H