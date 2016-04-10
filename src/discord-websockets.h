/*
 * Copyright 2015 Artem Savkov <artem.savkov@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "discord.h"

gboolean discord_ws_keepalive_loop(gpointer data, gint fd,
                                   b_input_condition cond);

int discord_ws_init(struct im_connection *ic, discord_data *dd);
void discord_ws_cleanup(discord_data *dd);
void discord_ws_set_status(discord_data *dd, gboolean idle, gchar *message);
