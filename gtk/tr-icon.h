/*
 * This file Copyright (C) 2010-2014 Mnemosyne LLC
 *
 * This file is licensed by the GPL version 2. Works owned by the
 * Transmission project are granted a special exemption to clause 2 (b)
 * so that the bulk of its code can remain under the MIT license.
 * This exemption does not extend to derived works not owned by
 * the Transmission project.
 *
 * $Id$
 */

#ifndef GTR_ICON_H
#define GTR_ICON_H

#include <gtk/gtk.h>
#include "tr-core.h"

gpointer  gtr_icon_new    (TrCore * core);
void      gtr_icon_refresh (gpointer);

#endif /* GTR_ICON_H */
