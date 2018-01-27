#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main() {
  Fl_Window window(200, 200, "Window Title");
  Fl_Box box(0,0,200,200, "Heellooo");
  /*
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  window->end();
  */
  window.show();
  return Fl::run();
}
