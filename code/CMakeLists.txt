cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(controller)
include_directories(controller/commands)
include_directories(controller/commands/usecase)
include_directories(controller/errors)
include_directories(controller/read_write)
include_directories(model/dna)
include_directories(model/dna/dnaDecorators)
include_directories(model/dna_data)
include_directories(view)
include_directories(view/interface)

add_executable(code
        controller/commands/usecase/Help.cpp
        controller/commands/usecase/Help.h
        controller/commands/usecase/load.cpp
        controller/commands/usecase/load.h
        controller/commands/usecase/new.cpp
        controller/commands/usecase/new.h
        controller/commands/usecase/save.cpp
        controller/commands/usecase/save.h
        controller/commands/icommand.cpp
        controller/commands/icommand.h
        controller/errors/CommandNotFound.h
        controller/errors/DnaException.h
        controller/errors/InvalidCommand.h
        controller/errors/InvalidDna.h
        controller/errors/NotFound.h
        controller/errors/OpenFileError.h
        controller/read_write/DnaReader.cpp
        controller/read_write/DnaReader.h
        controller/read_write/DnaWriter.cpp
        controller/read_write/DnaWriter.h
        controller/commands_container.cpp
        controller/commands_container.h
        controller/Controller.cpp
        controller/Controller.h
        model/dna/dnaDecorators/SliceDecorator.cpp
        model/dna/dnaDecorators/SliceDecorator.h
        model/dna/DnaSequence.cpp
        model/dna/DnaSequence.h
        model/dna/IDnaSequence.h
        model/dna/Nucleotide.h
        model/dna_data/data.cpp
        model/dna_data/data.h
        model/dna_data/meta_data.cpp
        model/dna_data/meta_data.h
        view/interface/cli.cpp
        view/interface/cli.h
        view/interface/UI.h
        view/parser.cpp
        view/parser.h
        main.cpp
        SharedPtr.h controller/commands/usecase/Slice.cpp controller/commands/usecase/Slice.h controller/commands/usecase/Len.cpp controller/commands/usecase/Len.h model/dna/dnaDecorators/ReplaceDecorator.cpp model/dna/dnaDecorators/ReplaceDecorator.h controller/commands/usecase/Replace.cpp controller/commands/usecase/Replace.h controller/commands/usecase/Find.cpp controller/commands/usecase/Find.h controller/commands/usecase/Count.cpp controller/commands/usecase/Count.h controller/commands/parameters/IParameters.h)
