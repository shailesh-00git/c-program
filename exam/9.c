#include <graphics.h>
#include <conio.h>

int main()
{
  int gd = DETECT, gm;

  // Initialize graphics mode
  initgraph(&gd, &gm, "");

  // Set background color to green
  setbkcolor(GREEN);
  cleardevice(); // Apply background color

  // Set drawing color (foreground) to red
  setcolor(RED);

  // Draw a circle at (200, 150) with radius 50
  circle(200, 150, 50);

  // Draw an ellipse at (400, 150) with x-radius 80 and y-radius 50
  ellipse(400, 150, 0, 360, 80, 50);

  // Draw a rectangle from top-left (100, 250) to bottom-right (300, 350)
  rectangle(100, 250, 300, 350);

  getch();      // Wait for a key press
  closegraph(); // Close graphics mode

  return 0;
}
