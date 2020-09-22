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
        controller/commands/control/help/Help.cpp
        controller/commands/control/help/Help.h
        controller/commands/creation/load/load.cpp
        controller/commands/creation/load/load.h
        controller/commands/creation/new/new.cpp
        controller/commands/creation/new/new.h
        controller/commands/management/save/save.cpp
        controller/commands/management/save/save.h
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
        SharedPtr.h controller/commands/manipulation/slice/Slice.cpp controller/commands/manipulation/slice/Slice.h controller/commands/analysis/len/Len.cpp controller/commands/analysis/len/Len.h model/dna/dnaDecorators/ReplaceDecorator.cpp model/dna/dnaDecorators/ReplaceDecorator.h controller/commands/manipulation/replace/Replace.cpp controller/commands/manipulation/replace/Replace.h controller/commands/analysis/find/Find.cpp controller/commands/analysis/find/Find.h controller/commands/analysis/count/Count.cpp controller/commands/analysis/count/Count.h controller/commands/IParameters.h controller/commands/creation/new/NewParams.cpp controller/commands/creation/new/NewParams.h controller/commands/creation/load/LoadParams.cpp controller/commands/creation/load/LoadParams.h controller/commands/management/save/SaveParams.cpp controller/commands/management/save/SaveParams.h controller/commands/manipulation/slice/SliceParams.cpp controller/commands/manipulation/slice/SliceParams.h controller/commands/control/help/HelpParams.cpp controller/commands/control/help/HelpParams.h controller/commands/manipulation/Colon.cpp controller/commands/manipulation/Colon.h controller/commands/analysis/count/CountParams.cpp controller/commands/analysis/count/CountParams.h controller/commands/analysis/len/LenParams.cpp controller/commands/analysis/len/LenParams.h controller/commands/analysis/find/FindParams.cpp controller/commands/analysis/find/FindParams.h controller/commands/analysis/findAll/FindAllParams.cpp controller/commands/analysis/findAll/FindAllParams.h controller/commands/analysis/findAll/FindAll.cpp controller/commands/analysis/findAll/FindAll.h controller/allCommands.h controller/commands/manipulation/replace/ReplaceParams.cpp controller/commands/manipulation/replace/ReplaceParams.h controller/CallBack.cpp controller/CallBack.h)
