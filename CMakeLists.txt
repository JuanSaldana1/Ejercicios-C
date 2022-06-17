cmake_minimum_required(VERSION 3.22)
project(Curso_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Curso_C
        ejercicio11.c
        ejercicio1Internet.c
        ejercicio2.c
        ejercicio3.c
        gnlExam03Edition.c
        gnlExam03Edition.h
        main.c)
