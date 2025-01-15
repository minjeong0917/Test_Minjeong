#include "PreCompile.h"

#include "TestGameMode.h"
#include "polygon.h"
#include <EngineCore/CameraActor.h>
#include <EngineCore/DefaultSceneComponent.h>
#include <EngineCore/SpriteRenderer.h>
#include <EngineCore/TileMapRenderer.h>
#include <EngineCore/EngineGUIWindow.h>
#include <EngineCore/EngineGUI.h>
#include <EngineCore/imgui.h>
#include <EngineCore/EngineCamera.h>
#include "ContentsEditorGUI.h"
#include <EnginePlatform/EngineInput.h>

ATestGameMode::ATestGameMode()
{
	Polygon = GetWorld()->SpawnActor<Apolygon>();

	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -1000.0f, 1.0f });
	Camera->GetCameraComponent()->SetZSort(0, true);


}

ATestGameMode::~ATestGameMode()
{
}

void ATestGameMode::Tick(float _DeltaTime)
{
	AGameMode::Tick(_DeltaTime);
	if (UEngineInput::IsDown('P'))
	{
		GetWorld()->GetMainCamera()->FreeCameraSwitch();

	}

}
