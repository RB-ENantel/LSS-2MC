#include "LSS-2MC.h"

// < Constructor >
/*
 * Sets the proper pin to output.
 */
LSS2MC::LSS2MC()
{

}

/*
 *
 *
 */
void LSS2MC::arm()
{
	digitalWrite(nSLEEP, HIGH);
}

/*
 *
 *
 */
void LSS2MC::disarm()
{
	digitalWrite(nSLEEP, LOW);
}

/*
 *
 *
 */
void LSS2MC::stop(int outputBank)
{
	oBank = outputBank;
	if (oBank == 1){
		digitalWrite(Out1, LOW);
		digitalWrite(Out2, LOW);
	}
	if (oBank == 2){
		digitalWrite(Out3, LOW);
		digitalWrite(Out4, LOW);
	}
}

/*
 *
 *
 */
void LSS2MC::speed(int outputBank, int motDirection, int motOutput)
{
	oBank = outputBank;
	oDirection = motDirection;
	oOutput = motOutput;
	if (oBank == 1){
		if (oDirection == 1)	{
			digitalWrite	(Out1, LOW);
			analogWrite		(Out2, constrain(oOutput, 0, 255));
		}
		else if (oDirection == 2)	{
			digitalWrite	(Out2, LOW);
			analogWrite		(Out1, constrain(oOutput, 0, 255));
		}
	}
	if (oBank == 2){
		if (oDirection == 1)	{
			digitalWrite	(Out4, LOW);
			analogWrite		(Out3, constrain(oOutput, 0, 255));
		}
		else if (oDirection == 2)	{
			digitalWrite	(Out3, LOW);
			analogWrite		(Out4, constrain(oOutput, 0, 255));
		}
	}
}
