### Set up

 - download fltk (note Chrome may silently gunzip the .tar.gz without renaming to .tar)
 - Linux: `./configure && make && sudo make install`
 - Windows: Install Visual Studio with windows sdk
  - from fltk\ide\VisualC2010 `start demo.vcxproj` - accept upconvert then quit
  - from developer command prompt: `msbuild demo.vcxproj /p:Configuration=release`
  - then copy ../FL and ../lib to install dir of your choosing and set as FLTKDIR user env var

### Compile, link, run

``` bash
Linux: ./compile-and-run.sh
Windows developer command prompt: compile-and-run.bat
```
