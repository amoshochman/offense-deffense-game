cmake_minimum_required(VERSION 3.17)
project(TheGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(TheGame main.cpp Game.cpp CDefenceUnit.cpp CDefenceUnit.h COffenceUnit.cpp COffenceUnit.h CGameAdmin.h CGameAdmin.cpp CAuxiliary.cpp CAuxiliary.h CConstants.h CLocation.cpp CLocation.h CReader.cpp CReader.h CUnitProperty.cpp CUnitProperty.h)