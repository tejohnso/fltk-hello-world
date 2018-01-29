cl /MD /I "%FLTKDIR%" hello.cpp fltk.lib gdi32.lib user32.lib ole32.lib advapi32.lib shell32.lib /link /libpath:"%FLTKDIR%\lib"
hello
