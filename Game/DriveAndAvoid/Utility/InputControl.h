#pragma once

#include"Vector2D.h"

//入力管理機能
class InputControl
{
private:
	static bool now_button[16];//現在フレーム入力値
	static bool old_button[16];//過去フレーム入力値
	static float trigger[2];   //左右トリガー入力値
	static Vector2D stick[2];  //左右スティック入力値
};

