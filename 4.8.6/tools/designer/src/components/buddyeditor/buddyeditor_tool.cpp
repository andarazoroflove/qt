/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "buddyeditor_tool.h"
#include "buddyeditor.h"

#include <QtDesigner/QDesignerFormWindowInterface>

#include <QtGui/QAction>

QT_BEGIN_NAMESPACE

using namespace qdesigner_internal;

BuddyEditorTool::BuddyEditorTool(QDesignerFormWindowInterface *formWindow, QObject *parent)
    : QDesignerFormWindowToolInterface(parent),
      m_formWindow(formWindow),
      m_action(new QAction(tr("Edit Buddies"), this))
{
}

BuddyEditorTool::~BuddyEditorTool()
{
}

QDesignerFormEditorInterface *BuddyEditorTool::core() const
{
    return m_formWindow->core();
}

QDesignerFormWindowInterface *BuddyEditorTool::formWindow() const
{
    return m_formWindow;
}

bool BuddyEditorTool::handleEvent(QWidget *widget, QWidget *managedWidget, QEvent *event)
{
    Q_UNUSED(widget);
    Q_UNUSED(managedWidget);
    Q_UNUSED(event);

    return false;
}

QWidget *BuddyEditorTool::editor() const
{
    if (!m_editor) {
        Q_ASSERT(formWindow() != 0);
        m_editor = new BuddyEditor(formWindow(), 0);
        connect(formWindow(), SIGNAL(mainContainerChanged(QWidget*)), m_editor, SLOT(setBackground(QWidget*)));
        connect(formWindow(), SIGNAL(changed()),
                    m_editor, SLOT(updateBackground()));
    }

    return m_editor;
}

void BuddyEditorTool::activated()
{
    m_editor->enableUpdateBackground(true);
}

void BuddyEditorTool::deactivated()
{
    m_editor->enableUpdateBackground(false);
}

QAction *BuddyEditorTool::action() const
{
    return m_action;
}

QT_END_NAMESPACE
