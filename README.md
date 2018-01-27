### Set up

 - download fltk (not Chrome may silently gunzip the .tar.gz without renaming to .tar)
 - ./configure && make && sudo make install

### Compile, link

``` bash
g++ $(fltk-config --cxxflags) -o hello hello.cpp $(fltk-config --ldflags)
```
