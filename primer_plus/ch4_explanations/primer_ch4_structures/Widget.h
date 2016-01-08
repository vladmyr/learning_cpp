#pragma once

#include <string>

// example of union data format - format that holds 
// one of specified datatypes at a time
struct Widget {
	std::string brand;
	int type;
	union id {
		long idNum;
		std::string idStr;
	};
};
