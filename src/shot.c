#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <cairo.h>

void
getScreenshot(int x, int y, int w, int h)
{
    Display * screen;
    cairo_surface_t * surface;
    Window * window = RootWindow(screen, DefaultScreen(screen));
    XWindowAttributes * windowData;


    screen = XOpenDisplay (NULL);
    assert(screen);

    XGetWindowAttributes (screen,
                          window,
                          windowData);

    surface = cairo_xlib_surface_create (screen,
                                         win,
                                         TrueColor,
                                         winData.width,
                                         winData.height);

    cairo_surface_write_to_png (surface,
                                "/tmp/test.png");

}//getScreenshot
