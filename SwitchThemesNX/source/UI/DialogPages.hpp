#pragma once
#include <switch.h>
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include "../SwitchThemesCommon/SwitchThemesCommon.hpp"
#include "UI.hpp"
#include "../fs.hpp"
#include <functional>

class LoadingOverlay : public IUIControlObj
{	
	public:
		LoadingOverlay(const std::string &msg);	

		void Render(int X, int Y) override;
		void Update() override;
	private:
		Button text;
};

class FatalErrorPage : public IUIControlObj
{
	public:
		FatalErrorPage(const std::string &msg);	

		void Render(int X, int Y) override;
		void Update() override;
	private:
		Label text;
};

class DialogPage : public IUIControlObj
{
	public:
		DialogPage(const std::string &msg);	

		void Render(int X, int Y) override;
		void Update() override;
	private:
		Label text;
		Label Btn;
};