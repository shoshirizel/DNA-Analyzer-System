#include <cstddef>
#include <map>
#include <string>
#include <iostream>


class DnaMetaData;

class DnaData;

class Parser;

class DnaSequence{
public:
	DnaSequence();
	DnaSequence(std::string){}
	DnaSequence(const char*){}
};

class ICli
{
public:
	virtual std::string input() = 0;
	virtual void output(std::string) = 0;	

};

class Cli : public ICli
{
public:
	/*virtual*/ std::string input(){std::cout<<"input\n";
	return "input";}
	/*virtual */ void output(std::string){std::cout<<"output\n";}	

};

class DnaMetaData
{
public:
	size_t getId(){return 1;}
	std::string getName(){return "sari";}
	DnaSequence* getDna(){return new DnaSequence("AATG");}
	
private:
	size_t m_id;
	std::string m_name;
	DnaSequence* m_dna;

};

class Data
{
public:	
	DnaMetaData* getByName(std::string){return new DnaMetaData();}
	DnaMetaData* getById(size_t){return new DnaMetaData();}	
private:
	std::map<std::string,DnaMetaData*> m_names;
	std::map<size_t,DnaMetaData*> m_ids;
	
};



class ICommand
{
public:
	virtual void action()=0;
	virtual void help();

};
class Manager
{
public:
	Manager(ICli* cli,DnaData* dnaData,Parser* parser){
	m_cli=cli;
	m_dnaData=dnaData;
	m_parser=parser;
	}
	void run(){
	 //std::string str=m_cli->input();
	 ICommand* command = m_parser->parser(m_cli->input()) ;
	 command->action();
	 m_cli->output("output");
	}
	void start(){std::cout<<"start\n";}
	void exit(){std::cout<<"exit\n";}
private:
	ICli* m_cli;
	DnaData* m_dnaData;
	Parser* m_parser;
};

class New:public ICommand
{

public:
	New(Data,std::string name);
	/*virtual*/ void action(){std::cout<<"in New\n";}
	/*virtual*/ void help();
	
private:
	static size_t s_id;
	static size_t s_name;
};


class Load:public ICommand
{
public:
	Load(Data);
	/*virtual*/ void action(){std::cout<<"in Load\n";}
	/*virtual*/ void help();
};


class Save:public ICommand
{
public:
	Save(Data);
	/*virtual*/ void action(){std::cout<<"in Save\n";}
	/*virtual*/ void help();
};

class Parser
{
public:
	ICommand* parser(std::string data){std::cout<<"in parser\n";
	return new Load(data);}
};



