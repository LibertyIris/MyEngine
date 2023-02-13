#include "MyEngine.h"

/*
namespace MyEngine {
	__declspec(dllimport) void Print();
}
*/

class Sandbox : public MyEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

MyEngine::Application* MyEngine::CreateApplication()
{
	return new Sandbox();
}