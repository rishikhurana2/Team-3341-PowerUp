#ifndef CameraMoveLeft_H
#define CameraMoveLeft_H

#include "../CommandBase.h"
#include <WPILib.h>
#include "RobotMap.h"

class CameraMoveLeft : public CommandBase {
public:
	CameraMoveLeft();
	~CameraMoveLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:

};

#endif  // CameraMoveLeft_H
