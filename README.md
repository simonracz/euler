![euler](euler.jpg)

Euler
=====

My Project Euler solutions.

## Prerequisites
The project uses cmake. (http://www.cmake.org)
After cloning, you also have to get the [athene](https://github.com/simonracz/athene) git submodule.
<pre>
euler$ git submodule init
euler$ git submodule update
</pre>

## Building
<pre>
euler$ mkdir build
euler$ cd build
build$ cmake ..
build$ make
</pre>

OR

<pre>
euler$ mkdir build
euler$ cd build
build$ cmake .. -G Xcode
build$ open ./EULER.xcodeproj
</pre>
