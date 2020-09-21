////
//// Created by shoshi on 9/16/20.
////
//#include <sstream>
//
//#include "Slice.h"
//
//#include "../../../model/dna_data/data.h"
//#include "../../../model/dna/dnaDecorators/SliceDecorator.h"
//
//Slice::Slice(Data *data) :m_data(data) {}
//
//std::string Slice::action(const IParameters&)
//{
//    if (vec.size() < 4)
//    {
//        throw InvalidCommand();
//    }
//
//    if (vec.size() == 4)
//    {
//        DnaMetaData* metaData = m_data->getMetaData(vec[1]);
//        SharedPtr<IDnaSequence> d(new SliceDecorator(metaData->getSharedDnaPtr(), std::atoi(vec[2].c_str()), std::atoi(vec[3].c_str())));
//        metaData->decoratePtr(d);
//
//        std::stringstream ss;
//        ss << "[" << m_data->getByName(metaData->getName())->getId() << "]  " << metaData->getName() << ": " << (*metaData->getDna()) << std::endl;
//        return ss.str();
//    }
//
//    if (vec[4] != ":")
//    {
//        throw InvalidCommand();
//    }
//
//    return "";
//}
//
//std::string Slice::help()
//{
//    return "slice <seq> <from_ind> <to_ind> [: [@<new_seq_name>|@@]]";
//}
