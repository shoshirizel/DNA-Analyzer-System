cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(dna)

add_executable(code
        dna/DnaSequence.cpp
        dna/DnaSequence.h
        dna/InvalidDna.cpp
        dna/InvalidDna.h
        manager.cpp
        manager.h usecase/save.cpp usecase/save.h usecase/new.cpp usecase/new.h usecase/load.cpp usecase/load.h parser.cpp parser.h icli.cpp icli.h cli.cpp cli.h icommand.cpp icommand.h data.cpp data.h meta_data.cpp meta_data.h main.cpp)
