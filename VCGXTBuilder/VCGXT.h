﻿#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include <map>
#include <set>

struct TableSortMethod
{
	bool operator()(const std::string &lhs, const std::string &rhs) const
	{
		if (rhs == "MAIN")
		{
			return false;
		}
		else if (lhs == "MAIN")
		{
			return true;
		}
		else
		{ 
			return (lhs < rhs);
		}
	}
};

class VCGXT
{
public:
	static const unsigned int SizeOfTABL = 12;
	static const unsigned int SizeOfTKEY = 12;

	bool LoadText(const char *);
	void SaveAsGXT(const char *);
	void GenerateWMHHZStuff();

	VCGXT();

private:
	static inline void UTF8ToUTF16(const std::string &, std::vector<uint16_t> &);

	static size_t GetDataBlockSize(const std::map<std::string, std::vector<uint16_t> > &);

	std::map<std::string, std::map<std::string, std::vector<uint16_t> >, TableSortMethod> m_GxtData;
	std::set<uint16_t> m_WideCharCollection;
};
