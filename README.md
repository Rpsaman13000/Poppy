# 🎮 Poppy

*A lightweight, hobbyist game engine written in C++ using Vulkan and Clang.*

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Platform](https://img.shields.io/badge/platform-linux%20%7C%20windows-lightgrey)
![Language](https://img.shields.io/badge/language-C%2B%2B17-blue)
![Status](https://img.shields.io/badge/status-WIP-orange)

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
- [Dependencies](#dependencies)
- [Build Instructions](#build-instructions)
- [Project Structure](#project-structure)
- [Screenshots](#screenshots)
- [Roadmap](#roadmap)
- [Inspiration](#inspiration)
- [Contributing](#contributing)
- [License](#license)

---

## 🧩 About

**MyVulkanGameEngine** is a personal learning project and experimental game engine written in modern C++17. It uses the Vulkan API for rendering and is compiled with Clang. The goal is to learn more about graphics programming, ECS architectures, and low-level engine design.

---

## 🚀 Features

- Vulkan rendering backend
- Real-time rendering loop
- Basic ECS (Entity-Component System)
- Resource manager (shaders, textures, etc.)
- Input handling (keyboard/mouse)
- Cross-platform (Windows + Linux)
- Written in C++17, compiled with Clang

Planned:
- Basic physics system
- Audio support
- Scene serialization
- Simple scripting (Lua?)

---

## 📦 Getting Started

### Prerequisites

Make sure the following are installed:

- C++17-compatible compiler (Clang recommended)
- [Vulkan SDK](https://vulkan.lunarg.com/)
- [CMake](https://cmake.org/) (v3.15+)
- Git

### Cloning the Repository

```bash
git clone https://github.com/yourusername/MyVulkanGameEngine.git
cd MyVulkanGameEngine
````

---

## 🛠 Dependencies

* Vulkan SDK
* GLFW (Windowing + Input)
* GLM (Math library)
* stb\_image (Image loading)
* spdlog (Logging)
* tinyobjloader (Optional: OBJ mesh loading)

Use submodules or package managers (like vcpkg or Conan) to manage dependencies.

---

## 🔧 Build Instructions

### Linux / macOS

```bash
mkdir build && cd build
cmake .. -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
make -j$(nproc)
```

### Windows (with Clang + MSVC tools)

```bash
mkdir build && cd build
cmake .. -G "Ninja" -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl
ninja
```

---

## 📁 Project Structure

```
MyVulkanGameEngine/
├── assets/           # Shaders, textures, models
├── include/          # Public headers
├── src/              # Engine source files
│   ├── core/
│   ├── renderer/
│   └── ecs/
├── third_party/      # External libraries
├── CMakeLists.txt
└── README.md
```

---

## 🖼 Screenshots

> Add screenshots or videos of your engine in action here

---

## 📅 Roadmap

* [x] Basic rendering loop
* [x] Load and display a textured quad
* [ ] Implement ECS properly
* [ ] Add support for 3D models
* [ ] Implement a basic physics system
* [ ] Add UI (ImGui integration)
* [ ] Asset hot-reloading

---

## 🌟 Inspiration

This project wouldn't exist without the inspiration and education provided by these amazing people and projects:

* [TheCherno's Hazel Engine](https://github.com/TheCherno/Hazel) – for architecture, tooling, and motivation
* [Sascha Willems' Vulkan Examples](https://github.com/SaschaWillems/Vulkan) – for practical Vulkan knowledge and demos
* [Brendan Galea's C++ game engine series](https://www.youtube.com/@MakingGamesWithBrendan) – for foundational ideas and walkthroughs
* [component-based ECS articles by Niklas Gray](https://www.dataorienteddesign.com/dodbook/) – for ECS architecture inspiration

Thank you to the open-source community for sharing their work and knowledge 🙌

---

## 🤝 Contributing

This is a personal project, but contributions or feedback are welcome. Feel free to open an issue or pull request if you spot something broken or want to improve a feature.

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).
