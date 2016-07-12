#include <stdio.h>

#include "gd.h"
#include "gdtest.h"

int main(int argc, char **argv)
{
    gdImagePtr im;
    FILE *fp = gdTestFileOpen("tga/bug00247.tga");
    im = gdImageCreateFromTga(fp);
    if (im != NULL)
	gdImageDestroy(im);
    return 0;
}
