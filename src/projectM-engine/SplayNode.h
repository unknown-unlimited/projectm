/**
 * projectM -- Milkdrop-esque visualisation SDK
 * Copyright (C)2003-2007 projectM Team
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
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * See 'LICENSE.txt' included within this release
 *
 */
/**
 * $Id$
 *
 * Node of a splay tree
 *
 * $Log$
 */

#ifndef _SPLAYNODE_H
#define _SPLAYNODE_H

#include "projectM.h"

#include "compare.h"


class SplayNode {
public:
    int type;
    SplayTree *tree;
    SplayNode *left, *right;
    void *data;
    void *key;

    SplayNode();
    SplayNode( int type, void *key, void *data, SplayTree *tree );
    ~SplayNode();
  };

#endif /** !_SPLAYTREE_H */