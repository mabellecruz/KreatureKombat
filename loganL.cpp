/*
 * File:   loganL.cpp
 * Author: Logan Lovett
 * Debugging steps:
 * 1. Recognize that a bug exists
 * 2. Isolate the source of the bug
 * 3. Identify the cause of the bug
 * 4. Determine a fix for the bug
 * 5. Apply the fix and test it
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showLoganCredits (int x, int y, GLuint id)
{
	Rect l;
	l.bot = 300;
	l.left = 150;
	l.center = 0;
	ggprint16( &l, 16, 0x0, "Logan Lovett");
	float wid = 100.0f;
	glColor3ub( 255, 255, 255);
	glPushMatrix();
	glTranslatef( ( float ) x, ( float ) y, 0);
	glBindTexture( GL_TEXTURE_2D, id);
	glBegin( GL_QUADS);
	glTexCoord2f( 0.0f, 1.0f); glVertex2i( -wid/2, -wid/2);
	glTexCoord2f( 0.0f, 0.0f); glVertex2i( -wid/2,  wid/2);
	glTexCoord2f( 1.0f, 0.0f); glVertex2i( wid/2,  wid/2);
	glTexCoord2f( 1.0f, 1.0f); glVertex2i( wid/2, -wid/2);
	glEnd();
	glPopMatrix();
}
