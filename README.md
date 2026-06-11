# raylib-template

A minimal, plug-and-play [raylib](https://www.raylib.com/) + [Dear ImGui](https://github.com/ocornut/imgui) C++ starter. 

All dependencies (raylib 6.0, Dear ImGui 1.92.7, [rlImGui](https://github.com/raylib-extras/rlImGui)) are downloaded and built automatically by CMake on the first configure and there is nothing to install or copy manually.

## Requirements

- [w64devkit](https://github.com/skeeto/w64devkit) 
- [CMake](https://cmake.org/download/) 3.15+

## Usage

```
git clone https://github.com/achintya1812/raylib-template.git <project name>
cd <project name>
.\build.bat
build\game.exe
```

The first configure downloads raylib and the first build compiles it. After that just rerun `cmake --build build`.
