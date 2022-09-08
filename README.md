# shortcuts.cmake
Various C++ std shortcuts. This will make your life better and your code readers' lives worse, but don't worry, no one reads your code anyway! You can add this via CPM.cmake and shoot in your foot once more, because this thing does not use any namespaces! Why, you may ask. The reason is that this repo will be remade to be used with c++20 modules, but there is a catch: C++20 IS NOT YET SUPPORTED!

# Add via CPM.cmake
```cmake
include(cmake/CPM.cmake)
CPMAddPackage("gh:RIGIK93/shortcuts.cmake#main")

# ...

# Link to the created library shortcuts
target_link_libraries(myapp PRIVATE shortcuts)
```
