#include "PreCompile.h"
#include "ContentsEditorGUI.h"
#include "EngineCore/EngineCore.h"
#include "EngineCore/EngineGUI.h"

UContentsEditorGUI::UContentsEditorGUI()
{
}

UContentsEditorGUI::~UContentsEditorGUI()
{
}

void UContentsEditorGUI::OnGUI()
{
	std::map<std::string, std::shared_ptr<class ULevel>> Map = UEngineCore::GetAllLevelMap();

	for (std::pair<const std::string, std::shared_ptr<class ULevel>>& Pair : Map)
	{
		// ??영어넣어줬는데 why ???????????????
		if (ImGui::Button(Pair.first.c_str()))
		{
			UEngineCore::OpenLevel(Pair.first);
		}
	}

	std::string Txt = UEngineString::AnsiToUTF8("안녕하세요 하하하하 호호호");

	ImGui::Text(Txt.c_str());
}




