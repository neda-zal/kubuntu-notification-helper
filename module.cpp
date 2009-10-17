/***************************************************************************
 *   Copyright © 2009 by Jonathan Thomas <echidnaman@kubuntu.org>          *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#include "module.h"

#include <kpluginfactory.h>
#include <kpluginloader.h>

K_PLUGIN_FACTORY(NotificationHelperModuleFactory,
                 registerPlugin<NotificationHelperModule>();
    )
K_EXPORT_PLUGIN(NotificationHelperModuleFactory("NotificationHelper"))


NotificationHelperModule::NotificationHelperModule(QObject* parent, const QList<QVariant>&)
    : KDEDModule(parent)
{
}

#include "module.moc"
