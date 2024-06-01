/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#pragma once

#include <QMetaType>
#include <QString>
#include <QDataStream>
#include <QVector>

namespace QmlDesigner {

class DebugOutputCommand
{
    friend QDataStream &operator>>(QDataStream &in, DebugOutputCommand &command);
    friend bool operator ==(const DebugOutputCommand &first, const DebugOutputCommand &second);

public:
    enum Type {
        DebugType,
        WarningType,
        ErrorType,
        FatalType
    };

    DebugOutputCommand();
    explicit DebugOutputCommand(const QString &text, Type type, const QVector<qint32> &instanceIds);

    qint32 type() const;
    QString text() const;
    QVector<qint32> instanceIds() const;

private:
    QVector<qint32> m_instanceIds;
    QString m_text;
    quint32 m_type;
};

QDataStream &operator<<(QDataStream &out, const DebugOutputCommand &command);
QDataStream &operator>>(QDataStream &in, DebugOutputCommand &command);

bool operator ==(const DebugOutputCommand &first, const DebugOutputCommand &second);
QDebug operator <<(QDebug debug, const DebugOutputCommand &command);

} // namespace QmlDesigner

Q_DECLARE_METATYPE(QmlDesigner::DebugOutputCommand)
