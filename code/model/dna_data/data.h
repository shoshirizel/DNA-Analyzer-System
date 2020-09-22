//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_DATA_H
#define CODE_DATA_H


#include <map>
#include "meta_data.h"
#include "../../controller/errors/NotFound.h"
#include "../../controller/errors/InvalidCommand.h"

class Data
{
public:
    ~Data();

    DnaMetaData* getByName(std::string name);
    DnaMetaData* getById(size_t id);
    std::string getNameDnaByArgs(std::vector<std::string>);
    std::string getDefName();
    DnaMetaData* getMetaData(std::string);

    bool isSeqNameExist(std::string);
    void newDna(std::string name, std::string seq);
    size_t getId();
    void setId();

private:
    std::string getNotExistName(std::string);

    std::map<std::string, DnaMetaData*> m_names;
    std::map<size_t, DnaMetaData*> m_ids;
    static size_t m_id;

};

inline size_t Data::getId()
{
    return m_id;
}

inline void Data::setId()
{
    ++m_id;
}

inline DnaMetaData * Data::getByName(std::string name)
{
    if (m_names.find(name) == m_names.end())
    {
        throw NotFound();
    }

    return m_names[name];
}

inline DnaMetaData * Data::getById(size_t id)
{
    if (m_ids.find(id) == m_ids.end())
    {
        throw NotFound();
    }

    return m_ids[id];
}

inline DnaMetaData* Data::getMetaData(std::string args)
{
    if ((args[0]) == '@')
        return getByName(args.erase(0, 1));

    if ((args[0]) == '#')
        return getById(size_t(std::atoi(args.erase(0, 1).c_str())));

    throw InvalidCommand();
}

#endif //CODE_DATA_H
