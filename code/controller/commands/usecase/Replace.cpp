////
//// Created by shoshi on 9/21/20.
////
//
//#include <sstream>
//
//#include "Replace.h"
//
//#include "../../../model/dna_data/data.h"
//#include "../../../model/dna/dnaDecorators/ReplaceDecorator.h"
//
//Replace::Replace(Data *data): m_data(data) {}
//
//std::string Replace::action(const IParameters&)
//{
//    if (vec.size() < 4)
//    {
//        throw InvalidCommand();
//    }
//
//    if (vec.size() == 4)
//    {
//        DnaMetaData* metaData = m_data->getMetaData(vec[1]);
//        IDnaSequence *r = new ReplaceDecorator(metaData->getSharedDnaPtr(), std::atoi(vec[2].c_str()), (Nucleotide) vec[3][0]);
//        SharedPtr<IDnaSequence> d(r);
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
//std::string Replace::help()
//{
//    return "replace <seq> <index> <new_letter> [: [@<new_seq_name>|@@]]";
//}
