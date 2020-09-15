cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(commands)
include_directories(commands/usecase)
include_directories(dna)
include_directories(dna_data)
include_directories(errors)
include_directories(interface)
include_directories(controller)
include_directories(model/read_write)

add_executable(code
        commands/usecase/load.cpp
        commands/usecase/load.h
        commands/usecase/new.cpp
        commands/usecase/new.h
        commands/usecase/save.cpp
        commands/usecase/save.h
        commands/icommand.cpp
        commands/icommand.h
        dna/DnaSequence.cpp
        dna/DnaSequence.h
        dna_data/data.cpp
        dna_data/data.h
        dna_data/meta_data.cpp
        dna_data/meta_data.h
        errors/DnaException.h
        errors/InvalidDna.h
        interface/cli.cpp
        interface/cli.h
        interface/input_output.cpp
        interface/input_output.h
        controller/commands_container.cpp
        controller/commands_container.h
        controller/Controller.cpp
        controller/Controller.h
        controller/parser.cpp
        controller/parser.h
        model/read_write/DnaReader.cpp
        model/read_write/DnaReader.h
        model/read_write/DnaWriter.cpp
        model/read_write/DnaWriter.h
        main.cpp
        SharedPtr.h errors/CommandNotFound.h errors/OpenFileError.h errors/InvalidCommand.h commands/usecase/Help.cpp commands/usecase/Help.h controller/errors/NotFound.h model/dna/IDnaSequence.h model/dna/Nucleotide.h)
