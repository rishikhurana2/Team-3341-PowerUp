#ifndef MoveCameraRight_H
#define MoveCameraRight_H

#include "../CommandBase.h"

class MoveCameraRight : public CommandBase {
public:
	MoveCameraRight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MoveCameraRight_H
