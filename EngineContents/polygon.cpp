#include "PreCompile.h"

#include <EngineCore/SpriteRenderer.h>
#include <EnginePlatform/EngineInput.h>
#include <EngineCore/DefaultSceneComponent.h>
#include <EngineCore/CameraActor.h>
#include <EngineCore/TimeEventComponent.h>
#include <EngineCore/Collision.h>
#include "MyCustomRenderer.h"
#include "polygon.h"

Apolygon::Apolygon()
{

	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	Renderer = CreateDefaultSubObject<MyCustomRenderer>();
	Renderer->SetScale3D({ 200.0f, 200.0f, 200.0f });
	Renderer->SetRotation({ 0.0f,45.0f,0.0f });
	Renderer->SetupAttachment(RootComponent);

}

Apolygon::~Apolygon()
{
}

void Apolygon::BeginPlay()
{
	AActor::BeginPlay();


}

void Apolygon::Tick(float _DeltaTime)
{
	AActor::Tick(_DeltaTime);

}