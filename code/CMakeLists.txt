cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(dna)
include_directories(usecase)

add_executable(code
        dna/DnaSequence.cpp
        dna/DnaSequence.h
        dna/InvalidDna.cpp
        dna/InvalidDna.h
        usecase/load.cpp
        usecase/load.h
        usecase/new.cpp
        usecase/new.h
        usecase/save.cpp
        usecase/save.h
        interface/cli.cpp
        interface/cli.h
        manager/commands_container.cpp
        manager/commands_container.h
        dna_data/data.cpp
        dna_data/data.h
        interface/icli.cpp
        interface/icli.h
        commands/icommand.cpp
        commands/icommand.h
        main.cpp
        manager/manager.cpp
        manager/manager.h
        dna_data/meta_data.cpp
        dna_data/meta_data.h
        manager/parser.cpp
        manager/parser.h model/read_write/DNAReader.cpp model/read_write/DNAReader.h)
