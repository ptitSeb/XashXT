/*
r_opengl.h - OpenGL definition
Copyright (C) 2011 Uncle Mike

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#ifndef R_OPENGL_H
#define R_OPENGL_H

//#include <windows.h>

#ifdef __ANDROID__
#include <GL/gl.h>
#else
#define NO_SDL_GLEXT
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

#endif


#ifndef APIENTRY
#define APIENTRY
#endif

#ifndef EXTERN
#define EXTERN extern
#endif

#endif
