cmake_minimum_required(VERSION 4.3)
project(FitnessProgramStudy C)

set(CMAKE_C_STANDARD 23)

add_executable(FitnessProgramStudy main.c
        sources/analysisFunctions.c
        )

target_include_directories(FitnessProgramStudy PRIVATE
    includes
)