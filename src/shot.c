#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

XImage *
getScreenshot(int x, int y, int w, int h)
{
    Display * screen;
    XImage * shot;

    screen = XOpenDisplay(NULL);
    assert(screen);

    shot = XGetImage(screen,
                     RootWindow(dpl, DefaultScreen(dpl)),
                     x, y, w, h,
                     AllPlanes,
                     ZPixmap);

}//getScreenshot
