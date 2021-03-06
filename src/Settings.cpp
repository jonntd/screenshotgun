#include "Settings.h"

Settings::Settings() : settings_("screenshotgun", "main") {
}

bool Settings::exists() const {
    return settings_.contains("common/autostartup");
}

void Settings::create() {
    setAutostartup(false);
}

bool Settings::autostartup() const {
    return settings_.value("common/autostartup", false).toBool();
}

UploadService Settings::service() const {
    return static_cast<UploadService>(settings_.value("common/service", static_cast<int>(UploadService::SERVER)).toInt());
}

QString Settings::serverUrl() const {
    return settings_.value("server/url", "").toString();
}

QString Settings::dropboxToken() const {
    return settings_.value("dropbox/token", "").toString();
}

QString Settings::yandexToken() const {
    return settings_.value("yandex/token", "").toString();
}

void Settings::setAutostartup(const bool value) {
    settings_.setValue("common/autostartup", value);
}

void Settings::setService(const UploadService value) {
    settings_.setValue("common/service", static_cast<int>(value));
}

void Settings::setServerUrl(const QString& value) {
    settings_.setValue("server/url", value);
}

void Settings::setDropboxToken(const QString& value) {
    settings_.setValue("dropbox/token", value);
}

void Settings::setYandexToken(const QString& value) {
    settings_.setValue("yandex/token", value);
}
