#pragma once

// example of bit fields
struct TorgleRegister {
	unsigned int SN : 4;	// 4 bits for SN value
	unsigned int : 4;		// 4 bits unused
	bool goodIn: 1;			// valid input (1 bit)
	bool goodTorgle : 1;	// successful torgling
};
