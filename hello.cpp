#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main() {
  Fl_Window window(200, 200, "Window Title");
  Fl_Box box(50,50,150,150, "Heellooo");

  box.box(FL_UP_BOX);
  box.labelfont(FL_BOLD+FL_ITALIC);
  box.labelsize(18);
  window.end();

  window.show();
  return Fl::run();
}
