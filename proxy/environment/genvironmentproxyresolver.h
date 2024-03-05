/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * GIO - GLib Input, Output and Streaming Library
 *
 * Copyright © 2022 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, see
 * <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <glib-object.h>
#include <gio/gio.h>

#include "visibility.h"

G_BEGIN_DECLS

#define G_TYPE_ENVIRONMENT_PROXY_RESOLVER         (g_environment_proxy_resolver_get_type ())

GLIB_NETWORKING_EXPORT
G_DECLARE_FINAL_TYPE (GEnvironmentProxyResolver, g_environment_proxy_resolver, G, ENVIRONMENT_PROXY_RESOLVER, GObject)

GLIB_NETWORKING_EXPORT
void g_environment_proxy_resolver_register (GIOModule *module);

G_END_DECLS
