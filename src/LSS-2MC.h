#ifndef MOT_Library
#define MOT_Library

#if (ARDUINO >= 100)
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class LSS2MC
{
	public:
		LSS2MC();
		void arm();
		void disarm();
		void stop(int outputBank);
		void speed(int outputBank, int motDirection, int motOutput);
		int atmegaBuffer	= 14;
		int usbBuffer		= 7;
		int nSLEEP			= 2;

	private:
		int oBank;
		int oDirection;
		int oOutput;
		int Out1			= 9;
		int Out2			= 10;
		int Out3			= 3;
		int Out4			= 11;

};

#endif

