#pragma once
#include "MyCustomRenderer.h"

// Ό³Έν :
class Apolygon : public AActor
{
public:
	// constrcuter destructer
	Apolygon();
	~Apolygon();

	// delete Function
	Apolygon(const Apolygon& _Other) = delete;
	Apolygon(Apolygon&& _Other) noexcept = delete;
	Apolygon& operator=(const Apolygon& _Other) = delete;
	Apolygon& operator=(Apolygon&& _Other) noexcept = delete;

protected:
	void BeginPlay();
	void Tick(float _DeltaTime);


private:
	std::shared_ptr<class MyCustomRenderer> Renderer;

};

