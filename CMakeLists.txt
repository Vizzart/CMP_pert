cmake_minimum_required(VERSION 3.15)
project(CPM_pert)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPM_pert Program.cpp Program.h Activity.cpp Activity.h Incident.cpp Incident.h Graph.cpp Graph.h)