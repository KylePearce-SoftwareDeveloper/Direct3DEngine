#pragma once
#include <unordered_map>
#include "../hpp/WinDef.h"
#include <string>
#include <sstream>
#include <iomanip>

class WindowsMessageMap
{
public:
	WindowsMessageMap() noexcept;
	std::string operator()(DWORD msg, LPARAM lp, WPARAM wp) const noexcept;
private:
	std::unordered_map<DWORD, std::string> map;
};
