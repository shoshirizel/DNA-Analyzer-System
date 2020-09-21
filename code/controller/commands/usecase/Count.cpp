////
//// Created by shoshi on 9/21/20.
////
//
//#include "Count.h"
//
//#include <sstream>
//#include "../../../model/dna_data/data.h"
//#include "../../errors/InvalidCommand.h"
//
//Count::Count(Data* data) : m_data(data) {}
//std::string Count::action(const IParameters& args)
//{
//    if (args.size() != 3)
//        throw InvalidCommand();
//    DnaSequence* d = m_data->getMetaData(args[1])->getDna();
//    std::stringstream ss;
//    size_t flag = d->count(args[2]);
//    if (flag > 0)
//        ss << flag;
//    else
//        ss << "Not Exist";
//    return ss.str();
//}
//
//std::string Count::help()
//{
//    return "count: <seq_id> <sub_seq> return the number of instances of the sub-sequence within the larger sequence.\n";
//}
