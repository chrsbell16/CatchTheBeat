#include "s3e.h"
#include "Iw2D.h"

// Main entry point for the application
int main()
{
	Iw2DInit();
	// Wait for a quit request from the host OS
	while (!s3eDeviceCheckQuitRequest())
	{
		// Fill background blue
		s3eSurfaceClear(0, 0, 255);

		// Print a line of debug text to the screen at top left (0,0)
		// Starting the text with the ` (backtick) char followed by 'x' and a hex value
		// determines the colour of the text.
		s3eDebugPrint(120, 150, "`xffffffHello, World!", 0);

		// Flip the surface buffer to screen
		s3eSurfaceShow();

		// Sleep for 0ms to allow the OS to process events etc.
		s3eDeviceYield(0);
	}
	return 0;
}