### Set up

 - download fltk (note Chrome may silently gunzip the .tar.gz without renaming to .tar)
 - Linux: `./configure && make && sudo make install`
 - Windows: Install Visual Studio with windows sdk
  - from developer command prompt, cd to fltk ide\VisualC2010 directory
  - start fltk.lib.vcxproj and retarget all projects then exit
  - remove "DLL" from all RuntimeLibrary sections in fltk.lib.vcxproj
  - `msbuild /p:Configuration=release fltk.lib.vcxproj`
  - copy ..\..\FL and ..\..\lib to install dir of your choosing and set as user env var FLTKDIR

### Compile, link, run

``` bash
Linux: ./compile-and-run.sh
Windows developer command prompt: compile-and-run.bat
```
