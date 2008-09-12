/*
 * rotctl_parse.h - (C) Stephane Fillod 2000-2008
 *
 * This program test/control a radio using Hamlib.
 * It takes commands in interactive mode as well as 
 * from command line options.
 *
 * $Id: rotctl_parse.h,v 1.1 2008-09-12 22:55:09 fillods Exp $  
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */

#ifndef ROTCTL_PARSE_H
#define ROTCTL_PARSE_H

#include <stdio.h>
#include <hamlib/rotator.h>

/* 
 * Prototypes
 */
void usage_rot(FILE *);
void version();
void list_models();
int print_conf_list(const struct confparams *cfp, rig_ptr_t data);
int set_conf(ROT *my_rot, char *conf_parms);

int rotctl_parse(ROT *my_rot, FILE *fin, FILE *fout, char *argv[], int argc);

#endif	/* ROTCTL_PARSE_H */
