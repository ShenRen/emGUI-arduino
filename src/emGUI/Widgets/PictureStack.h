/*
	emGUI Library V1.0.0 - Copyright (C) 2013 
	Roman Savrulin <romeo.deepmind@gmail.com>
	

    This file is part of the emGUI Library distribution.

    emGUI Library is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Roman Savrulin AND MODIFIED BY the emGUI Library exception.
	
    >>>NOTE<<< The modification to the GPL is included to allow you to
    distribute a combined work that includes emGUI Library without being obliged to
    provide the source code for proprietary components outside of the emGUI Library.
	emGUI Library is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
    more details. You should have received a copy of the GNU General Public
    License and the emGUI Library license exception along with emGUI Library; if not it
    can be obtained by writing to Roman Savrulin <romeo.deepmind@gmail.com>.
	
	Created on: 24.12.2012
*/
#ifndef EMGUI_PICTURE_STACK_H
#define EMGUI_PICTURE_STACK_H


#ifdef __cplusplus
extern "C" {
#endif
  
#include "Widget.h"


  
typedef xWidget xPictureStack;
  
typedef struct xPictureStackItem_t xPictureStackItem;
  
struct xPictureStackItem_t {
xPicture xPic;
xPictureStackItem *pxNext;
};

typedef struct xPictureStackProps_t {
	char cItemNumber;
	char cItemCount;
	bool bDisposable;
	WidgetEvent pxOnDispose;
	xPictureStackItem *xItems;
} xPictureStackProps;

xPictureStack * pxPictureStackCreate(uint16_t usX, uint16_t usY, xPicture xPic, xWidget *pxWidParent);
bool            bPictureStackSelect(xWidget *pxW, char cItemNumber);
bool            bPictureStackAddItem(xWidget *pxW, xPicture xPic);
xPicture        xPictureStackGetItem(xWidget *pxW, char cItemNumber);
bool			bPictureStackClose(xPictureStack *pxW);
bool            bPictureStackDraw(xPictureStack *pxW);
#ifdef __cplusplus
}
#endif



#endif	//__PICTURE_STACK_H
